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
 json str_2;
 json str_3;
  json j_1= j1[0];
  json j_2= j1[1];
  json j_3= j1[2];
  str_1["tiker"] = j_1[0];
  str_1["id"] = j_2[0];
  str_1["description"] = j_3[0];
  str_2["tiker"] = j_1[1];
  str_2["id"] = j_2[1];
  str_2["description"] = j_3[1];
  str_3["tiker"] = j_1[2];
  str_3["id"] = j_2[2];
  str_3["description"] = j_3[2];
 json result;
 result.push_back(str_1);
 result.push_back(str_2);
 result.push_back(str_3);
 std::cout<< result<<std::endl;
}
