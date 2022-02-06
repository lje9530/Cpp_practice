#include <iostream>

class Date {
  int year_;
  int month_;  // 1 부터 12 까지.
  int day_;    // 1 부터 31 까지.

 public:
  void SetDate(int year, int month, int date) {
      year_ = year;
      month_ = month;
      day_ = date;
  }
  void AddDay(int inc) {
      day_ += inc;
      if (day_ > 31) {
          AddMonth(day_ / 31);
          day_ = day_ % 31;
      }

  }
  void AddMonth(int inc) {
      month_ += inc;
      if (month_ > 12) {
          year_ += (month_ / 12);
          month_ = month_ % 12;
      }
  }
  void AddYear(int inc) {
      year_ += inc;   
  }

  void ShowDate() {
      std::cout << year_ << "년" << month_ << "월" << day_ << "일" << std::endl;
  }
};

int main() {
    Date date;
    date.SetDate(2022, 2, 7);
    date.AddDay(30);
    date.AddMonth(11);
    date.AddYear(1);

    date.ShowDate();
    return 0;
}