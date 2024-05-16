#pragma once
#include <iostream>
#include <string>
#include "httplib.h"
#include <nlohmann/json.hpp>
using namespace std;

class FactsApp {
	httplib::Client* factsClient = new httplib::Client("http://jservice.io/api/random?count=1");
	struct Quiz_facts {
		const char* id;
		const char* answer;
		const char* question;
		const char* value;
		const char* created_at;
		const char* updated_at;
		const char* category_id;
		const char* game_id;
		const char* invalid_count;
	};
	httplib::Client* factsClient = new httplib::Client("https://kitsu.io/api/edge/anime?filter[text]=tokio");
	struct Anime_facts {
		const char* id;
		const char* type;
		const char* attributes;
		const char* synopsis;
		const char* titles;
		const char* en;
		const char* en_jp;
		const char* en_us;
		const char* canonicalTitle;
		const char* favoritesCount;
		const char* popularityRank;
		const char* ageRating;
		const char* posterImage;
		const char* original;
		const char* episodeCount;
		const char* episodeLength;
		const char* totalLength;
	};
};