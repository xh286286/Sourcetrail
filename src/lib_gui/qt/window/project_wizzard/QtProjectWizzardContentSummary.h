#ifndef QT_PROJECT_WIZZARD_CONTENT_SUMMARY_H
#define QT_PROJECT_WIZZARD_CONTENT_SUMMARY_H

#include "qt/window/project_wizzard/QtProjectWizzardContent.h"
#include "qt/window/project_wizzard/QtProjectWizzardContentBuildFile.h"
#include "qt/window/project_wizzard/QtProjectWizzardContentData.h"
#include "qt/window/project_wizzard/QtProjectWizzardContentSimple.h"
#include "qt/window/project_wizzard/QtProjectWizzardContentPaths.h"

class QtProjectWizzardContentSummary
	: public QtProjectWizzardContent
{
public:
	QtProjectWizzardContentSummary(ProjectSettings* settings, QtProjectWizzardWindow* window);

	QtProjectWizzardContentBuildFile* contentBuildFile();
	QtProjectWizzardContentPathsSource* contentPathsSource();

protected:
	// QtProjectContentWindow implementation
	virtual void populateWindow(QWidget* widget);
	virtual void windowReady();
	virtual void load();
	virtual void save();
	virtual bool check();

private:
	QtProjectWizzardContentData* m_data;
	QtProjectWizzardContentBuildFile* m_buildFile;
	QtProjectWizzardContentPathsSource* m_source;
	QtProjectWizzardContentSimple* m_simple;
	QtProjectWizzardContentPathsHeaderSearch* m_headerSearch;
	QtProjectWizzardContentPathsFrameworkSearch* m_frameworkSearch;
};

#endif // QT_PROJECT_WIZZARD_CONTENT_SUMMARY_H
