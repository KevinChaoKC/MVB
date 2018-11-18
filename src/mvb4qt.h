#ifndef MVB4QT_H
#define MVB4QT_H


#include <QtGlobal>
#include <QObject>

namespace Mvb4Qt
{
    enum MvbPortType
    {
        MvbSinkPort,
        MvbSourcePort,
        MvbVirtualPort
    };

    enum MvbPhyMode
    {
        MvbOfgMode,
        MvbEmdMode,
        MvbEmsMode
    };

    enum MvbBufferSize
    {
        MinMvbBuffer,
        MidMvbBuffer,
        MaxMvbBuffer
    };
}

#endif // MVB4QT_H
