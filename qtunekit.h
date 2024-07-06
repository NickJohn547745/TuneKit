#ifndef QTUNEKIT_H
#define QTUNEKIT_H

#include <QGenericPlugin>

class QTuneKit : public QGenericPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QGenericPluginFactoryInterface_iid FILE "QTuneKit.json")

public:
    explicit QTuneKit(QObject *parent = nullptr);

private:
    QObject *create(const QString &name, const QString &spec) override;
};

#endif // QTUNEKIT_H
