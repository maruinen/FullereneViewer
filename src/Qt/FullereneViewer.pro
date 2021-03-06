#
# Project: FullereneViewer
# Version: 1.0
# Copyright: (C) 2011-14 Dr.Sc.KAWAMOTO,Takuji (Ext)
# Create: 2012/03/14 15:36:05 JST
#

QT       += core gui opengl webkitwidgets
TEMPLATE = app
TARGET = FullereneViewer
DEPENDPATH += . ..
INCLUDEPATH += . ..
macx {
    DEPENDPATH += /usr/X11/include
    INCLUDEPATH += /usr/X11/include
    ICON = icons/FullereneViewer.icns
}
!macx:unix {
    LIBS += -lGLU
}
win32 {
    RC_FILE = FullereneViewer.rc
}

# Input
HEADERS += ../Automorphism.h ../Automorphisms.h ../AvoidBugs.h ../Bond.h \
           ../BoundaryCarbons.h ../Carbon.h ../CarbonAllotrope.h ../Center.h \
           ../Configuration.h ../Config.h ../Debug.h ../DebugMemory.h \
           ../DistanceMatrix.h ../ConnectedBoundary.h ../DistanceVector.h ../ErrorCode.h \
           ../Fullerene.h ../Characteristic.h ../Generator.h \
           ../Interactive.h ../InteractiveLine.h ../InteractiveOperation.h \
           ../InteractivePlane.h ../InteractivePoint.h ../InteractiveRegularPolygon.h \
           ../Interactives.h ../List.h ../Set.h ../Matrix3.h \
           ../MyString.h ../Normal.h ../Object.h ../OpenGLUtil.h ../Pattern.h \
           ../Posture.h ../Quaternion.h ../Radius.h ../Random.h ../Representation.h \
           ../RepresentationInfo.h ../Representations.h ../Ring.h ../Statistics.h \
           ../SymmetryAxis.h ../SymmetryAxisNormal.h ../ThreeViewNormal.h ../Utils.h \
           ../Vector3.h ../Version.h \
           ConfigurationDialog.h MainWindow.h Guruguru.h \
           HelpBrowser.h AboutWindow.h GeneratorFormulaDialog.h \
           TreeItem.h TreeModel.h SelectFullereneDialog.h
FORMS += MainWindow.ui ConfigurationDialog.ui AboutWindow.ui GeneratorFormulaDialog.ui \
    SelectFullereneDialog.ui
SOURCES += ../Automorphism.cc ../Automorphisms.cc ../Bond.cc ../BoundaryCarbons.cc \
           ../Carbon.cc ../CarbonAllotrope.cc ../Configuration.cc \
           ../ConnectedBoundary.cc ../DebugMemory.cc ../DistanceVector.cc \
           ../DistanceMatrix.cc ../ErrorCode.cc ../Fullerene.cc \
           ../Characteristic.cc ../Generator.cc ../Interactive.cc \
           ../InteractiveLine.cc ../InteractiveOperation.cc ../InteractivePlane.cc \
           ../InteractivePoint.cc ../InteractiveRegularPolygon.cc ../Interactives.cc \
           ../Matrix3.cc ../MyString.cc ../Object.cc ../OpenGLUtil.cc ../Pattern.cc \
           ../Quaternion.cc ../Random.cc ../Representation.cc ../RepresentationInfo.cc \
           ../Representations.cc ../Ring.cc ../Statistics.cc ../SymmetryAxis.cc \
           ../SymmetryAxisNormal.cc ../ThreeViewNormal.cc ../Utils.cc ../Vector3.cc \
           ../Version.cc \
           ConfigurationDialog.cc main.cc MainWindow.cc Guruguru.cc \
           HelpBrowser.cc AboutWindow.cc GeneratorFormulaDialog.cc \
           TreeItem.cc RingItem.cc CarbonItem.cc BondItem.cc TubeItem.cc MergedItem.cc \
           TreeModel.cc SelectFullereneDialog.cc

OTHER_FILES +=

RESOURCES += doc.qrc media.qrc
