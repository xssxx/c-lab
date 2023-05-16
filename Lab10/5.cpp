#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

class Time {
    private:
        int hour;
        int minute;
        int second;
    
    public:
        Time(int hour, int minute, int second) {
            this->hour = hour;
            this->minute = minute;
            this->second = second;
        }

        Time(int duration) {
            this->hour = duration / 3600;
            this->minute = (duration % 3600) / 60;
            this->second = duration % 60;
        }

        int getDuration() {
            return (hour * 3600) + (minute * 60) + second;
        }

        Time add(Time other) {
            int duration = (getDuration() + other.getDuration()) % 86400;
            Time result(duration);
            return result;
        }

        int subtract(Time other) {
            if (getDuration() >= other.getDuration()) {
                return getDuration() - other.getDuration();
            } else {
                return 86400 - (other.getDuration() - getDuration());
            }   
        }

        int equals(Time other) {
            if (getDuration() == other.getDuration())
                return 1;
            return 0;
        }

        string toString() {
            string time_str = "";
            time_str += (hour < 10 ? "0" : "") + to_string(hour) + ":";
            time_str += (minute < 10 ? "0" : "") + to_string(minute) + ":";
            time_str += (second < 10 ? "0" : "") + to_string(second);
            return time_str;
        }

        int getHour() {
            return hour;
        }

        int getMinute() {
            return minute;
        }

        int getSecond() {
            return second;
        }
};


int main() {
   // implement program to test class Time
   Time time(2, 2, 2);
   Time time2(1, 1, 1);

   cout << time.toString();
   cout << time2.toString();
   cout << time.getDuration() << endl;
   cout << time.subtract(time2) << endl;
   Time time3 = time.add(time2);
   cout << time3.toString();

}
