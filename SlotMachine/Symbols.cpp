#include "Symbols.h"

const std::vector<std::shared_ptr<Symbol>> Symbols::values = { std::make_shared<Symbol>("cherry" , std::array<int, 4>{25, 100, 250, 1000}, false,std::array<int, 2>{64,32}),
																std::make_shared<Symbol>("lemon", std::array<int, 4>{ 0,100,250,1000 }, false,std::array<int, 2>{64,32}),
																std::make_shared<Symbol>("orange", std::array<int, 4>{ 0,100,250,1000 }, false,std::array<int, 2>{64,32}),
																std::make_shared<Symbol>("plum", std::array<int, 4>{ 0,100,250,1000 }, false,std::array<int, 2>{64,32}),
																std::make_shared<Symbol>("watermelon", std::array<int, 4>{ 0,250,1000,2500 }, false,std::array<int, 2>{64,32}),
																std::make_shared<Symbol>("grapes", std::array<int, 4>{ 0,250,1000,2500 }, false,std::array<int, 2>{64,32}),
																std::make_shared<Symbol>("seven", std::array<int, 4>{ 0,500,5000,25000 }, false,std::array<int, 2>{64,32}),
																std::make_shared<Symbol>("crown", std::array<int, 4>{ 0,200,1000,5000 }, true,std::array<int, 2>{64,32})};