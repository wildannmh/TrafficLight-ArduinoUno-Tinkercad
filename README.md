# Traffic Light 4 Arah
**Nama:** Wildan Munawwar Habib  
**NIM:** H1D023045  
**Tugas 3 - Pemrograman Sistem Tertanam**

---

## Deskripsi Proyek
Proyek ini merupakan simulasi sistem kendali lampu lalu lintas (Traffic Light) untuk perempatan jalan (4 arah: Utara, Timur, Selatan, dan Barat). Sistem dibangun menggunakan mikrokontroler **Arduino Uno** dan disimulasikan melalui platform **Tinkercad**.

## Spesifikasi Sistem
Sistem bekerja dengan logika sebagai berikut:
1. **Urutan Nyala**: Searah jarum jam (Utara → Timur → Selatan → Barat → Kembali ke Utara).
2. **Keamanan**: Saat satu arah aktif (Hijau/Kuning), tiga arah lainnya dipastikan dalam kondisi lampu **Merah**.
3. **Durasi Waktu**:
   - **Lampu Hijau**: Menyala selama 5 detik.
   - **Lampu Kuning**: Berkedip sebanyak 3 kali dengan total durasi sekitar 2 detik sebelum berpindah ke Merah.
4. **Kondisi Awal**: Semua lampu dalam kondisi Merah sebelum siklus dimulai.

## Konfigurasi Pin
Pemasangan LED pada pin digital Arduino Uno adalah sebagai berikut:

| Arah | Merah (Pin) | Kuning (Pin) | Hijau (Pin) |
| :--- | :---: | :---: | :---: |
| **Utara** | 11 | 12 | 13 |
| **Timur** | 2 | 3 | 4 |
| **Selatan** | 5 | 6 | 7 |
| **Barat** | 8 | 9 | 10 |

## Cuplikan Rangkaian (Tinkercad)
Berikut adalah susunan komponen dan pengkabelan yang digunakan:
<img width="1536" height="632" alt="Lampu Merah" src="https://github.com/user-attachments/assets/cfbdad47-e805-47ad-97eb-3964fd54bb07" />

## Tautan Simulasi
Simulasi interaktif dapat diakses melalui tautan berikut:  
https://www.tinkercad.com/things/h05tqob7InD-lampu-merah?sharecode=7tyWtsbhxJtBppqd2-1OwiC045xfPrwfoc0c4aGV7Xk
