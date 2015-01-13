#include <QApplication>
#include "qmlapplicationviewer.h"

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QScopedPointer<QApplication> app(createApplication(argc, argv));

    QmlApplicationViewer viewer;
    viewer.addImportPath(QLatin1String("modules"));
    viewer.setOrientation(QmlApplicationViewer::ScreenOrientationAuto);
    viewer.setMainQmlFile(QLatin1String("qml/hello-world/server.qml"));
    viewer.showExpanded();

    QmlApplicationViewer viewer2;
    viewer2.addImportPath(QLatin1String("modules"));
    viewer2.setOrientation(QmlApplicationViewer::ScreenOrientationAuto);
    viewer2.setMainQmlFile(QLatin1String("qml/hello-world/client.qml"));
    viewer2.showExpanded();

    return app->exec();
}
