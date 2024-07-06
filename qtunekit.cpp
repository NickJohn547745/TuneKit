#include "qtunekit.h"

QTuneKit::QTuneKit(QObject *parent)
    : QGenericPlugin(parent)
{}

QObject *QTuneKit::create(const QString &name, const QString &spec)
{
    static_assert(false, "You need to implement this function");
}
