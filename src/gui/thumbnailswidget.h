#pragma once

#include <QTabWidget>
#include "ui_thumbnailswidget.h"


namespace asclepios::core
{
	class Patient;
}

namespace asclepios::gui
{
	class ThumbnailsWidget final : public QWidget
	{
	Q_OBJECT

	public:
		explicit ThumbnailsWidget(QWidget* parent = Q_NULLPTR);
		~ThumbnailsWidget() = default;

	public slots:
		void addThumbnail(core::Patient* t_patient);

	private:
		Ui::ThumbnailsWidget m_ui = {};
		QTabWidget* m_patientsTabs = {};

		void initView();
		void initData();
	};
}