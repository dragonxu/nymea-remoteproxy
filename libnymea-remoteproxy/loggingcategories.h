#ifndef LOGGINGCATEGORIES_H
#define LOGGINGCATEGORIES_H

#include <QDebug>
#include <QLoggingCategory>

Q_DECLARE_LOGGING_CATEGORY(dcApplication)
Q_DECLARE_LOGGING_CATEGORY(dcEngine)
Q_DECLARE_LOGGING_CATEGORY(dcJsonRpc)
Q_DECLARE_LOGGING_CATEGORY(dcWebSocketServer)
Q_DECLARE_LOGGING_CATEGORY(dcWebSocketServerTraffic)
Q_DECLARE_LOGGING_CATEGORY(dcAuthenticator)
Q_DECLARE_LOGGING_CATEGORY(dcConnectionManager)
Q_DECLARE_LOGGING_CATEGORY(dcDebug)

#endif // LOGGINGCATEGORIES_H