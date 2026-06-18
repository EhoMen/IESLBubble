#include <crow_all.h>
#include <iostream>
#include <sqlite3.h>



int main(){
    crow::SimpleApp app;

    CROW_ROUTE(app, "/<string>")([](std::string name){
	auto page = crow::mustache::load("index.html");
	crow::mustache::context ctx ({{"person", name}});
        return page.render(ctx);
    });

    app.port(18080).multithreaded().run();
    return 0;
}
