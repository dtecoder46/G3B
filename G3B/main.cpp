#include <iostream>
#include <fstream>

using namespace std;

void execute(string command, string color) {
    ofstream sql("data.db");
    sql << "\n" + command;
}

int main() {
    // input
    string color;
    cout << "Favorite color: ";
    cin >> color;


    // Nuxt SSR
    ofstream vue("/workspaces/codespaces-blank/green/app.vue");

    ifstream data("data.db");
    string data2;
    string txt;

    while (getline(data, data2)) {
        txt += data2.replace(0, 26, "");
    }
    
    string vuestr1 = "<template>\n\t<h1 id=\"title\" class=\"font-serif text-emerald-500 absolute h1 w-72 left-40 top-4 not-italic font-normal text-5xl leading-10\">Favorite Color</h1>";
    string nuxt = "\n\t<div id=\"d1\" class=\"bg-";
    string nuxt1 = " box-border absolute w-24 h-24 bg-"; 
    string nuxt1_1 = " left-60 top-20 border-2 border-black border-solid shadow-lg shadow-";
    string nuxt1_2 = " text-center\">\n\t\t<p id=\"curr\" class=\"text-2xl align-center leading-7\">Current: ";
    string vuestr2 = "</p>\n\t</div>\n\t<p id=\"prev\" class=\"bg-";
    string vuestr3 = " box-border absolute w-24 h-24 left-60 top-52 border-2 border-black border-solid shadow-lg shadow-";
    string nuxt1_3 = " text-center text-2xl align-center leading-7\">Previous: ";
    string nuxt2 = "</p>\n</template>\n<style scoped>\n\t#title, #d1, #prev {\n\t\tfont-family: Share Tech;\n\t}\n\n</style>";
    vue << vuestr1 + nuxt + color + nuxt1 + color + nuxt1_1 + color + nuxt1_2 + color + vuestr2 + txt + vuestr3 + txt + nuxt1_3 + txt + nuxt2;


    // SQL
    string command = "INSERT INTO colors VALUES " + color;
    execute(command, color);
}