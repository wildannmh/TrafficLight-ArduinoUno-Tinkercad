// Definisi Pin sesuai input
// Timur
int merahT = 2, kuningT = 3, hijauT = 4;
// Selatan
int merahS = 5, kuningS = 6, hijauS = 7;
// Barat
int merahB = 8, kuningB = 9, hijauB = 10;
// Utara
int merahU = 11, kuningU = 12, hijauU = 13;

void setup() {
  // Inisialisasi semua pin sebagai OUTPUT menggunakan loop
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
  
  // Kondisi default semua MERAH
  digitalWrite(merahT, HIGH);
  digitalWrite(merahS, HIGH);
  digitalWrite(merahB, HIGH);
  digitalWrite(merahU, HIGH);
}

void loop() {
  // Urutan searah jarum jam: Utara -> Timur -> Selatan -> Barat
  jalankanSimpang(merahU, kuningU, hijauU);
  jalankanSimpang(merahT, kuningT, hijauT);
  jalankanSimpang(merahS, kuningS, hijauS);
  jalankanSimpang(merahB, kuningB, hijauB);
}

// Fungsi modular untuk mengatur logika setiap simpang
void jalankanSimpang(int pinMerah, int pinKuning, int pinHijau) {
  // 1. Hijau menyala selama 5 detik
  digitalWrite(pinMerah, LOW);   // Matikan merah
  digitalWrite(pinHijau, HIGH);  // Hidupkan hijau
  delay(5000);                   // Durasi 5 detik
  digitalWrite(pinHijau, LOW);   // Matikan hijau
  
  // 2. Kuning berkedip 3 kali
  // Total durasi kuning mendekati 2 detik, 2000/6=333
  for (int i = 0; i < 3; i++) {
    digitalWrite(pinKuning, HIGH);
    delay(333); 
    digitalWrite(pinKuning, LOW);
    delay(333);
  }
  
  // 3. Kembali ke Merah
  digitalWrite(pinMerah, HIGH);
}