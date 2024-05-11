#ifndef SCORE_H
#define SCORE_H
#include<QGraphicsTextItem>

class Score: public QGraphicsTextItem
{
public:
    Score(QGraphicsItem *parent =0);
    void increase();
    int getScore();
    int m_score=0;
};

#endif // SCORE_H
