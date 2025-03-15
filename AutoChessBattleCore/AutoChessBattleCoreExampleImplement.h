#pragma once
#include "AutoChessBattleCore.hpp"

namespace AutoChessBattleCore
{
	/*
	这个实现只是为了通过编译，实际上没有任何实现
	*/
	class AutoChessBattleCoreExampleImplement : public AutoChessBattleCoreInterface
	{
	public:
		bool IsPlayerAlive() const override;


		PlayerView GetPlayer() const override;


		uint32_t GetPlayerGold() const override;


		uint32_t GetPlayerInitialGold() const override;


		void VisitPlayerRanking(const std::function<void(const PlayerView&) >& visitor) const override;


		uint32_t GetShopLevel() const override;


		bool CanIncreaseShopLevel() const override;


		bool IncreaseShopLevel() override;


		void VisitShopCards(const std::function<void(const CardView&) >& visitor) const override;


		bool CanRefreshShopCards() const override;


		bool RefreshShopCards() override;


		bool ToggleShopCardsFreeze() override;


		bool CanBuyShopCard(uint32_t card_id) const override;


		bool BuyShopCard(uint32_t card_id) override;


		void VisitPlayerCards(const std::function<void(const CardView&) >& visitor) const override;


		bool CanUsePlayerCard(uint32_t card_id, int32_t position) const override;


		bool UsePlayerCard(uint32_t card_id, int32_t position) override;


		void VisitPlayerMinions(const std::function<void(const MinionView&) >& visitor) const override;


		bool CanSellPlayerMinion(uint32_t minion_id) const override;


		bool SellPlayerMinion(uint32_t minion_id) override;


		bool CanMovePlayerMinion(uint32_t minion_id, int32_t position) const override;


		bool MovePlayerMinion(uint32_t minion_id, int32_t position) override;


		float GetPlayerPreparationRemainTime() const override;


		bool CanStartCombatRound() const override;


		void TickCombatRound() override;


		bool IsCombatRoundFinished() const override;


		int32_t GetCombatRoundResult() const override;


		PlayerView GetEnemyPlayer() const override;


		void VisitEnemyMinions(const std::function<void(const MinionView&) >& visitor) const override;

	};
}