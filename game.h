#ifndef GAME_H
#define GAME_H

#include "messagereceiver.h"
#include "Commons/message.h"
#include "Commons/board.h"
#include "widget.h"
#include <vector>
#include <sstream>
#include <QTableView>
#include <QStandardItemModel>

class Game : public MessageReceiver
{
public:
    Game(Widget* widget);
    void receiveMessage(Message* mes);
    void receivePlayers(std::vector<string>);
    void receivePieces(string message_text);
    void executeMove(string name, vector<Drop>);

private:
    Widget* widget;
    QTableWidget* board_widget;
    Board board;
    std::vector<Piece> available_pieces;
    QStandardItemModel score_model;
};

#endif // GAME_H
