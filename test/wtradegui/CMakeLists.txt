cmake_minimum_required (VERSION 3.1.0)

add_subdirectory (stockwidget)
add_subdirectory (loggerwidget)
add_subdirectory (optionwidget)

add_dependencies (test_wtradegui_stockwidget wtradegui)
add_dependencies (test_wtradegui_loggerwidget wtradegui)
add_dependencies (test_wtradegui_optionwidget wtradegui)
