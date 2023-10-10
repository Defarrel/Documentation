#include <iostream>
using namespace std;

/// \class MataKuliah
/// \brief Kelas MataKuliah merupakan kelas utama untuk program.
/// \remarks Kelas ini digunakan untuk menghitung nilai akhir dan mengecek kelulusan mata kuliah.
class MataKuliah {
private:
	/// \brief Variabel presensi digunakan untuk menyimpan nilai presensi.
	float presensi;
	/// \brief Variabel activity digunakan untuk menyimpan nilai activity.
	float activity;
	/// \brief Variabel exercise digunakan untuk menyimpan nilai exercise.
	float exercise;
	/// \brief Variabel tugasAkhir digunakan untuk menyimpan nilai tugas akhir.
	float tugasAkhir;
public:
	/// \brief Constructor default untuk kelas MataKuliah.
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	/// \brief Fungsi untuk menghitung nilai akhir mata kuliah.
	/// \return Nilai akhir mata kuliah dalam bentuk float.
	virtual float hitungNilaiAkhir() {
		return 0;
	}
	/// \brief Fungsi untuk mengecek kelulusan mata kuliah.
	virtual void cekKelulusan() {
		return;
	}
	/// \brief Fungsi untuk menginput nilai-nilai mata kuliah.
	virtual void input() {
		return;
	}
	/// \brief Fungsi untuk mengatur nilai presensi.
	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	/// \brief Fungsi untuk mendapatkan nilai presensi.
	/// \return Nilai presensi dalam bentuk float.
	float getPresensi() {
		return presensi;
	}
	/// \brief Fungsi untuk mengatur nilai activity.
	void setA(float nilai) {
		this->activity = nilai;
	}
	/// \brief Fungsi untuk mendapatkan nilai activity.
	/// \return Nilai activity dalam bentuk float.
	float getA() {
		return activity;
	}
	/// \brief Fungsi untuk mengatur nilai exercise.
	void setE(float nilai) {
		this->exercise = nilai;
	}
	/// \brief Fungsi untuk mendapatkan nilai exercise.
	/// \return Nilai exercise dalam bentuk float.
	float getE() {
		return exercise;
	}
	/// \brief Fungsi untuk mengatur nilai tugas akhir.
	void setUA(float nilai) {
		this->tugasAkhir = nilai;
	}
	/// \brief Fungsi untuk mendapatkan nilai tugas akhir.
	/// \return Nilai tugas akhir dalam bentuk float.
	float getUA() {
		return tugasAkhir;
	}
};

/// \class Pemrograman
/// \brief Kelas Pemrograman merupakan turunan dari kelas MataKuliah.
/// \remarks Kelas ini digunakan untuk menghitung nilai akhir dan mengecek kelulusan mata kuliah Pemrograman.
class Pemrograman : public MataKuliah {
private:
	/// \brief Variabel p digunakan untuk menyimpan nilai presensi.
	float p;
	/// \brief Variabel a digunakan untuk menyimpan nilai activity.
	float a;
	/// \brief Variabel e digunakan untuk menyimpan nilai exercise.
	float e;
	/// \brief Variabel ua digunakan untuk menyimpan nilai tugas akhir.
	float ua;
public:
	/// \brief Fungsi untuk menghitung nilai akhir mata kuliah Pemrograman.
	/// \return Nilai akhir mata kuliah dalam bentuk float.
	float hitungNilaiAkhir() override {
		float nilaiAkhir = (0.1 * p) + (0.2 * a) + (0.3 * e) + (0.4 * ua);
		return nilaiAkhir;
	}

	/// \brief Fungsi untuk mengecek kelulusan mata kuliah Pemrograman.
	void cekKelulusan() override {
		float nilaiAkhir = hitungNilaiAkhir();
		if (nilaiAkhir >= 75) {
			cout << "Selamat, Anda lulus mata kuliah Pemrograman dengan nilai akhir 75" << endl;
		}
		else {
			cout << "Tidak Lulus" << endl;
		}
	}

	/// \brief Fungsi untuk menginput nilai-nilai mata kuliah Pemrograman.
	void input() override {
		cout << "Program dibuat" << endl;
		cout << "Masukan nilai presensi: ";
		cin >> p;
		setPresensi(p);
		cout << "Masukan nilai Activity: ";
		cin >> a;
		setA(a);
		cout << "Masukan nilai Exercise: ";
		cin >> e;
		setE(e);
		cout << "Masukan nilai Tugas Akhir: ";
		cin >> ua;
		setUA(ua);
	}
};

int main() {
	Pemrograman obj;
	char ulang;
	do {
		obj.input();
		obj.cekKelulusan();
		cout << "Apakah anda ingin mengulang program ? Y / N: ";
		cin >> ulang;
	} while ((ulang == 'y') || (ulang == 'Y'));
}
