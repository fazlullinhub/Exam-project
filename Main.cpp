#include "Facts.h"

using namespace std;

httplib::Client* factsClient = new httplib::Client("http://jservice.io/api/random?count=1");
httplib::Client* factsClient = new httplib::Client("https://kitsu.io/api/edge/anime?filter[text]=tokio");

int main() {
	using json = nlohmann::json;
	class FactsApp {
		void showMenu() {
			int choice1;
			std::cout << "1 - Quiz facts" << std::endl;
			int choice2;
			std::cout << "2 - Anime facts" << std::endl;
		}
	};

