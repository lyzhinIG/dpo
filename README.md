# Сбор, передача и визуализация данных при помощи устройств IoT
## Примеры 
1. Тестирование платы. [Реализация мигающего светодиода](https://raw.githubusercontent.com/lyzhinIG/dpo/main/src/1_Blink.ino). В строке №8 `int led = 13;` указывается к какому выводу подключен светодиод.
3. Тестирование датчика. [Получение показаний с датчика BMP280](https://raw.githubusercontent.com/lyzhinIG/dpo/main/src/2_bmp280test.ino). 
4. Получение показаний температуры с датчика BMP280 и [вычисление средней температуры по трем показаниям](https://raw.githubusercontent.com/lyzhinIG/dpo/main/src/3_bmp280test_mean.ino). 
5. Тестирование подключения к сети. [Реализация http-клиента на базе ESP32](https://raw.githubusercontent.com/lyzhinIG/dpo/main/src/4_BasicHttpClient.ino). В строке №64 `    wifiMulti.addAP("SSID", "PASSWORD");
` определяется идентификатор беспроводной сети и пароль.
5. Оправка показаний температуры, полученных с датчика BMP280, на облачную платформу . [Реализация](https://raw.githubusercontent.com/lyzhinIG/dpo/main/src/5_BasicHttpClient_BMP280.ino). В строке №108 ` const char url[] PROGMEM = " ";
` устанавливается access Key.
---
## Дополнительно
- [Объединение строк на С](src/concatenate.c)
- Сервис [initialstate](https://initialstate.com)