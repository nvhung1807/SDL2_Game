#ifndef PLAYER_STAT_H
#define PLAYER_STAT_H_

#include "CommonFunc.h"
#include "BaseObject.h"

class PlayerStat : public BaseObject
{
public:
    PlayerStat();
    ~PlayerStat();

    void SetNum(const int& num){number_ = num;}
    void AddPos(const int& xPos);
    void Show(SDL_Renderer* screen);
    void Init(SDL_Renderer* screen);

    void Increase();
    void Decrease();
private:
    int number_;
    std::vector<int> pos_list_;
};

class PlayerMoney : public BaseObject
{
public:
    PlayerMoney();
    ~PlayerMoney();
    void Init(SDL_Renderer* screen);
    void Show(SDL_Renderer* screen);
    void SetPos(const int& x, const int& y){x_pos_ = x; y_pos_ = y;}
private:
    int x_pos_;
    int y_pos_;
};
#endif // PLAYER_STAT_H
