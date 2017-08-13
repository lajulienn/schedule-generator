#ifndef CONFIG_H
#define CONFIG_H

#include <vector>

namespace config {
  std::vector<const char *> available_time = {"Пн, 16:00", "Пн, 18:00",
                                        "Вт, 16:00", "Вт, 18:00",
                                        "Ср, 16:00", "Ср, 18:00",
                                        "Чт, 16:00", "Чт, 18:00",
                                        "Пт, 16:00", "Пт, 18:00",
                                        "Сб, 10:00", "Сб, 12:00", "Сб, 14:00", "Сб, 16:00", "Сб, 18:00"};

  std::vector<const char *> subjects = {"Математика",
                                  "Русский",
                                  "Физика",
                                  "Биология",
                                  "Обществознание",
                                  "История"};

  std::vector<const char *> classes = {"9", "10"};
}

#endif // CONFIG_H
