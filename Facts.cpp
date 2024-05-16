#include "Facts.h"
using namespace std;

int main() {

	using nlohmann::json;

	httplib::Client* factsClient = new httplib::Client("http://jservice.io/api/random?count=1");
	bool flag = true;
	int choice1;
	json resultId, resultAnswer, resultQuestion, resultValue, resultCreated_at, resultUpdated_at, resultCategory_id, resultGame_id, resultInvalid_count;
	cout << "Quiz id:" << resultId["id"] << "Answer:" << resultAnswer["answer"] << "Question:" << resultQuestion["question"] << "Value:" << resultValue["value"] << "creation at:" << resultCreated_at["created_at"] << "Updating at:" << resultUpdated_at["updated_at"] << "Category id:" << resultCategory_id["category_id"] << "Game id:" << resultGame_id["game_id"] << "Invalid count:" << resultInvalid_count["invalid_count"];

	httplib::Client* factsClient = new httplib::Client("https://kitsu.io/api/edge/anime?filter[text]=tokio");
	bool flag = true;
	int choice2;
	json resultId, resultType, resultAttributes, resultSynopsis, resultTitles, resultEn, resultEn_jp, resultEn_us, resultcanonicalTitle, resultFavoritesCount, resultPopularityRank, resultAgeRating, resultPosterImage, resultOriginal, resultEpisodeCount, resultEpisodeLength, resultTotalLength;
	cout << "Id:" << resultId["id"] << "Type:" << resultType["type"] << "Attributes:" << resultAttributes["attributes"] << "Synopsis:" << resultSynopsis["synopsis"] << "Titles:" << resultTitles["titles"] << "En:" << resultEn["en"] << "En_jp:" << resultEn_jp["en_jp"] << "En_us:" << resultEn_us["en_us"] << "Canonical title:" << resultcanonicalTitle["canonicalTitle"] << "Favorites count:" << resultFavoritesCount["favoritesCount"] << "Popularity rank:" << resultPopularityRank["popularityRank"] << "Age rating:" << resultAgeRating["ageRating"] << "Poster image:" << resultPosterImage["posterImage"] << "Original:" << resultOriginal["original"] << "Episode count:" << resultEpisodeCount["episodeCount"] << "Episode length:" << resultEpisodeLength["episodeLength"] << "Total length:" << resultTotalLength["totalLength"];
}