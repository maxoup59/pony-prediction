#include "util.hpp"
#include "ui/main-window.hpp"
#include <QString>
#include <QThread>

MainWindow * Util::mainWindow = nullptr;

float Util::getRandomFloat(const float &min, const float &max)
{
  return ((static_cast <float>(qrand()))
          * (max - min)
          / (static_cast<float>(RAND_MAX)))
      + min;
}
int Util::getRandomInt(const int &min, const int &max)
{
  int r = getRandomFloat(min-1, max+1);
  if(r < min || r > max)
    r = getRandomInt(min, max);
  return r;
}
template<typename T> void Util::debug(const T &arg)
{
  qDebug() << arg;
}
void Util::debug(const QVector<int> & arg)
{
  QString str = " | ";
  for(int i = 0; i < arg.size() ; i++)
    str += QString::number(arg[i]) + " | ";
  qDebug() << str;
}

void Util::init(MainWindow * mainWindow)
{
  Util::mainWindow = mainWindow;
}

void Util::addLog(const QString & log)
{
  emit mainWindow->newLog(log);
}
