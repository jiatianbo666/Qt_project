#include "score.h"
#include <QGraphicsItem>
#include<QFont>
Score::Score(QGraphicsItem *parent): QGraphicsTextItem(parent){

}

void Score::increase(){
    m_score=0;
    m_score++;
}

int Score::getScore(){
    return m_score;
}
