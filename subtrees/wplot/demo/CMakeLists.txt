cmake_minimum_required (VERSION 3.1.0)

add_subdirectory (background_solid)
add_subdirectory (background_gradient)
add_subdirectory (grid_black)
add_subdirectory (grid_color)
add_subdirectory (circle_simple)
add_subdirectory (circle_styled)
add_subdirectory (rectangle_simple)
add_subdirectory (rectangle_styled)
add_subdirectory (scatterplot_circle)
add_subdirectory (lineplot)
add_subdirectory (arrow_simple)
add_subdirectory (arrow_styled)
add_subdirectory (axes_simple)
add_subdirectory (axes_styled)
add_subdirectory (text_simple)
add_subdirectory (text_styled)
add_subdirectory (tick_labels_simple)
add_subdirectory (barplot2d_simple)
add_subdirectory (barplot2d_styled)
add_subdirectory (candlestick2d_simple)
add_subdirectory (candlestick2d_styled)
add_subdirectory (ohlcbar2d_simple)
add_subdirectory (ohlcbar2d_styled)
add_subdirectory (candlestickgraph2d_simple)
add_subdirectory (candlestickgraph2d_styled)
add_subdirectory (ohlcgraph2d_simple)
add_subdirectory (ohlcgraph2d_styled)

add_dependencies (demo_background_solid wplot)
add_dependencies (demo_background_gradient wplot)
add_dependencies (demo_grid_black wplot)
add_dependencies (demo_grid_color wplot)
add_dependencies (demo_circle_simple wplot)
add_dependencies (demo_circle_styled wplot)
add_dependencies (demo_rectangle_simple wplot)
add_dependencies (demo_rectangle_styled wplot)
add_dependencies (demo_scatterplot_circle wplot)
add_dependencies (demo_lineplot wplot)
add_dependencies (demo_arrow_simple wplot)
add_dependencies (demo_arrow_styled wplot)
add_dependencies (demo_axes_simple wplot)
add_dependencies (demo_axes_styled wplot)
add_dependencies (demo_text_simple wplot)
add_dependencies (demo_text_styled wplot)
add_dependencies (demo_tick_labels_simple wplot)
add_dependencies (demo_barplot2d_simple wplot)
add_dependencies (demo_barplot2d_styled wplot)
add_dependencies (demo_candlestick2d_simple wplot)
add_dependencies (demo_candlestick2d_styled wplot)
add_dependencies (demo_ohlcbar2d_simple wplot)
add_dependencies (demo_ohlcbar2d_styled wplot)
add_dependencies (demo_candlestickgraph2d wplot)
add_dependencies (demo_candlestickgraph2d_styled wplot)
add_dependencies (demo_ohlcgraph2d_simple wplot)
add_dependencies (demo_ohlcgraph2d_styled wplot)