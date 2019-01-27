#ifndef GUI_H
#define GUI_H

#include "world.h"

typedef struct
{
    vec2 position;
    vec2 tex_coord;
} gui_vertex;

typedef struct
{
    vec2 position;
    vec2 size;
    GLuint vao;
    GLuint vbo;
} gui_sprite;

typedef struct
{
    float window_width;
    float window_height;

    world *w;

    GLuint gui_program;
    GLuint gui_position_location;
    GLuint gui_tex_coord_location;
    GLuint gui_projection_location;
    GLuint gui_model_location;
    GLuint gui_texture_location;

    GLuint gui_texture;

    gui_sprite crosshair_sprite;
    gui_sprite hotbar_sprite;
    gui_sprite hotbar_selection_sprite;
} gui;

void gui_init(gui *g, world* w);
void gui_handle_input(gui *g, input* i);
void gui_draw(gui *g);
void gui_destroy(gui *g);

#endif
