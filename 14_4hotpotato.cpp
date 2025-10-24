#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stdexcept>

std::string hotPotato(const std::vector<std::string>& players, int K) {
    if (players.empty()) {
        throw std::runtime_error("players count must be more 0");
    }
    if (K <= 0) {
        K = 1; 
    }

    std::queue<std::string> game_queue;
    for (const std::string& name : players) {
        game_queue.push(name);
    }
    

    while (game_queue.size() > 1) {
 
        for (int i = 0; i < K - 1; ++i) {
            std::string player_to_pass = game_queue.front(); 
            game_queue.pop();                            
            game_queue.push(player_to_pass);             
        }

        std::string eliminated_player = game_queue.front();
        game_queue.pop();
        
        std::cout << eliminated_player << " is out . in game: " << game_queue.size() << " players.\n";
    }

    std::string winner = game_queue.front();
    std::cout << "winner - " << winner << "\n";
    return winner;
}


int main() {
    std::vector<std::string> players = {"Alice", "Bob", "Charlie", "David"};
    std::cout << hotPotato(players, 7) << '\n';  
}