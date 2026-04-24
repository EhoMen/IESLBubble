#include <crow/app.h>
#include <iostream>



int main(){
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](){
        return "hello world";
    });

    app.port(18080).multithreaded().run();
    return 0;
}
