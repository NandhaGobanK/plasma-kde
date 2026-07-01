#include "soliddeviceengine.h"
#include <solid/storageaccess.h>
#include <QDebug>

SolidDeviceEngine::SolidDeviceEngine(QObject *parent, const QVariantList &args)
    : Plasma::DataEngine(parent, args)
{
}

SolidDeviceEngine::~SolidDeviceEngine()
{
}

void SolidDeviceEngine::init()
{
}

bool SolidDeviceEngine::sourceRequestEvent(const QString &name)
{
    return updateSourceEvent(name);
}

bool SolidDeviceEngine::updateSourceEvent(const QString &name)
{
    Q_UNUSED(name);
    return true;
}

K_EXPORT_PLASMA_DATAENGINE_WITH_JSON(soliddevice, SolidDeviceEngine, "plasma-dataengine-soliddevice.json")
// Removed the duplicate trailing .moc include to resolve the linker duplicate symbol error
