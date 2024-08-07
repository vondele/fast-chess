#include <matchmaking/tournament/tournament_manager.hpp>

#include <util/logger/logger.hpp>

namespace fast_chess {

TournamentManager::TournamentManager(const stats_map& results) {
    Logger::trace("Creating tournament...");

    round_robin_ = std::make_unique<RoundRobin>(results);
}

void TournamentManager::start() {
    Logger::trace("Starting tournament...");

    round_robin_->start();
}

}  // namespace fast_chess
