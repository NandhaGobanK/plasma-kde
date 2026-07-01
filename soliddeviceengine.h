#ifndef SOLIDDEVICEENGINE_H
#define SOLIDDEVICEENGINE_H

#include <Plasma/DataEngine>

class SolidDeviceEngine : public Plasma::DataEngine
{
    Q_OBJECT

public:
    SolidDeviceEngine(QObject *parent, const QVariantList &args);
    ~SolidDeviceEngine() override;

protected:
    bool sourceRequestEvent(const QString &name) override;
    bool updateSourceEvent(const QString &name) override;

private:
    void init();
};

#endif
