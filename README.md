# Smart Alarm Door dengan Integrasi Notifikasi Blynk

## ANGGOTA

| Nama                  | NRP        |
| --------------------- | ---------- |
| Maulana Ahmad Zahiri  | 5027231010 |
| Athalla Barka Fadhil  | 5027231018 |
| Danendra Fidel Khansa | 5027231063 |

## DESKRIPSI PROYEK

Smart Alarm Door adalah sistem keamanan yang memanfaatkan sensor magnet untuk mendeteksi status pintu dan mengirimkan notifikasi melalui platform Blynk IoT. Sistem ini mengaktifkan buzzer dan indikator LED ketika pintu dibuka.

## Fitur

- Pemantauan status pintu secara real-time
- Alarm buzzer untuk akses yang tidak sah
- Indikator LED untuk peringatan visual
- Notifikasi Blynk untuk pemantauan jarak jauh

## INSTALASI

1. **Persyaratan:**

   - Arduino IDE
   - Library Blynk (Instal melalui Library Manager)
   - WeMos D1 Mini atau board ESP8266 lainnya

2. **Pengaturan:**

   - Ganti `ssid` dan `pass` dengan informasi Wi-Fi Anda.
   - Ganti `BLYNK_AUTH_TOKEN` dengan token autentikasi Blynk Anda.

3. **Upload Kode:**
   - Upload kode ke board menggunakan Arduino IDE.

## PENGGUNAAN

- Setelah meng-upload kode, buka aplikasi Blynk dan tambahkan widget untuk menerima notifikasi.
- Pastikan sensor magnet terpasang dengan benar pada pintu.
