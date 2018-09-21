#include <nlohmann/json.hpp>
#include <iostream>
#include <string>
using json = nlohmann::json;
int main() {
json j1 = R"([
 ["Si-9.15", "RTS-9.15", "GAZP-9.15"],
 [100024, 100027, 100050],
 ["Futures contract for USD/RUB", "Futures contract for index RTS", "Futures contract for Gazprom shares"]
])"_json;
 std::cout<< j1<< std::endl;
 json str_1;
  json j_1= j1[0];
  json j_2= j1[1];
  json j_3= j1[2];
  str_1["tiker"] = j_1[0];
  str_1["id"] = j_2[0];
  str_1["description"] = j_3[0];
 std:: cout << str_1<< std::endl;
}
