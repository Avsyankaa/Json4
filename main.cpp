#include <nlohmann/json.hpp>
#include <iostream>
#include <string>
using json = nlohmann::json;
int main() {
json j1 = R"([
 ["Si-9.15", "RTS-9.15", "GAZP-9.15"],
 [100024, 100027, 100050],
 ["Futures contract for USD/RUB", "Futures contract for index RTS", "Futures contract for Gazprom shares"]
])";
}
