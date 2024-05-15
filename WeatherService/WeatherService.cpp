#include "Weather.h"
#include <iostream>
#include <string>
using namespace std;

Weather::Weather(std::string city, double lon, double lat, double temperature, std::string weather, double windSpeed, int clouds)
    : city(city), lon(lon), lat(lat), temperature(temperature), weather(weather), windSpeed(windSpeed), clouds(clouds) {}

// Метод для вывода описания погоды
void Weather::printWeatherDescription() {
    std::cout << "Погода в городе " << city << ": " << weather << ", температура " << temperature << " градусов Цельсия, скорость ветра " << windSpeed << " м/с, облачность " << clouds << "%" << std::endl;
}

int main() {
    setlocale(LC_ALL, "ru");
    Weather kirov("Киров", 49.6601, 58.5966, 5.69, "дождь", 4.27, 100);
    kirov.printWeatherDescription();

    return 0;
}