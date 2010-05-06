static void char2b_get_byte1(void* ret, void* const* args) {
    *(int*)ret = ((xcb_char2b_t*)args[0])->byte1;
}
static void char2b_set_byte1(void* ret, void* const* args) {
    (void)ret;
    ((xcb_char2b_t*)args[0])->byte1 = *(int*)args[1];
}
static void char2b_get_byte2(void* ret, void* const* args) {
    *(int*)ret = ((xcb_char2b_t*)args[0])->byte2;
}
static void char2b_set_byte2(void* ret, void* const* args) {
    (void)ret;
    ((xcb_char2b_t*)args[0])->byte2 = *(int*)args[1];
}
static void point_get_x(void* ret, void* const* args) {
    *(int*)ret = ((xcb_point_t*)args[0])->x;
}
static void point_set_x(void* ret, void* const* args) {
    (void)ret;
    ((xcb_point_t*)args[0])->x = *(int*)args[1];
}
static void point_get_y(void* ret, void* const* args) {
    *(int*)ret = ((xcb_point_t*)args[0])->y;
}
static void point_set_y(void* ret, void* const* args) {
    (void)ret;
    ((xcb_point_t*)args[0])->y = *(int*)args[1];
}
static void rectangle_get_x(void* ret, void* const* args) {
    *(int*)ret = ((xcb_rectangle_t*)args[0])->x;
}
static void rectangle_set_x(void* ret, void* const* args) {
    (void)ret;
    ((xcb_rectangle_t*)args[0])->x = *(int*)args[1];
}
static void rectangle_get_y(void* ret, void* const* args) {
    *(int*)ret = ((xcb_rectangle_t*)args[0])->y;
}
static void rectangle_set_y(void* ret, void* const* args) {
    (void)ret;
    ((xcb_rectangle_t*)args[0])->y = *(int*)args[1];
}
static void rectangle_get_width(void* ret, void* const* args) {
    *(int*)ret = ((xcb_rectangle_t*)args[0])->width;
}
static void rectangle_set_width(void* ret, void* const* args) {
    (void)ret;
    ((xcb_rectangle_t*)args[0])->width = *(int*)args[1];
}
static void rectangle_get_height(void* ret, void* const* args) {
    *(int*)ret = ((xcb_rectangle_t*)args[0])->height;
}
static void rectangle_set_height(void* ret, void* const* args) {
    (void)ret;
    ((xcb_rectangle_t*)args[0])->height = *(int*)args[1];
}
static void arc_get_x(void* ret, void* const* args) {
    *(int*)ret = ((xcb_arc_t*)args[0])->x;
}
static void arc_set_x(void* ret, void* const* args) {
    (void)ret;
    ((xcb_arc_t*)args[0])->x = *(int*)args[1];
}
static void arc_get_y(void* ret, void* const* args) {
    *(int*)ret = ((xcb_arc_t*)args[0])->y;
}
static void arc_set_y(void* ret, void* const* args) {
    (void)ret;
    ((xcb_arc_t*)args[0])->y = *(int*)args[1];
}
static void arc_get_width(void* ret, void* const* args) {
    *(int*)ret = ((xcb_arc_t*)args[0])->width;
}
static void arc_set_width(void* ret, void* const* args) {
    (void)ret;
    ((xcb_arc_t*)args[0])->width = *(int*)args[1];
}
static void arc_get_height(void* ret, void* const* args) {
    *(int*)ret = ((xcb_arc_t*)args[0])->height;
}
static void arc_set_height(void* ret, void* const* args) {
    (void)ret;
    ((xcb_arc_t*)args[0])->height = *(int*)args[1];
}
static void arc_get_angle1(void* ret, void* const* args) {
    *(int*)ret = ((xcb_arc_t*)args[0])->angle1;
}
static void arc_set_angle1(void* ret, void* const* args) {
    (void)ret;
    ((xcb_arc_t*)args[0])->angle1 = *(int*)args[1];
}
static void arc_get_angle2(void* ret, void* const* args) {
    *(int*)ret = ((xcb_arc_t*)args[0])->angle2;
}
static void arc_set_angle2(void* ret, void* const* args) {
    (void)ret;
    ((xcb_arc_t*)args[0])->angle2 = *(int*)args[1];
}
static void format_get_depth(void* ret, void* const* args) {
    *(int*)ret = ((xcb_format_t*)args[0])->depth;
}
static void format_set_depth(void* ret, void* const* args) {
    (void)ret;
    ((xcb_format_t*)args[0])->depth = *(int*)args[1];
}
static void format_get_bits_per_pixel(void* ret, void* const* args) {
    *(int*)ret = ((xcb_format_t*)args[0])->bits_per_pixel;
}
static void format_set_bits_per_pixel(void* ret, void* const* args) {
    (void)ret;
    ((xcb_format_t*)args[0])->bits_per_pixel = *(int*)args[1];
}
static void format_get_scanline_pad(void* ret, void* const* args) {
    *(int*)ret = ((xcb_format_t*)args[0])->scanline_pad;
}
static void format_set_scanline_pad(void* ret, void* const* args) {
    (void)ret;
    ((xcb_format_t*)args[0])->scanline_pad = *(int*)args[1];
}
static void visualtype_get_visual_id(void* ret, void* const* args) {
    *(int*)ret = ((xcb_visualtype_t*)args[0])->visual_id;
}
static void visualtype_set_visual_id(void* ret, void* const* args) {
    (void)ret;
    ((xcb_visualtype_t*)args[0])->visual_id = *(int*)args[1];
}
static void visualtype_get_class(void* ret, void* const* args) {
    *(int*)ret = ((xcb_visualtype_t*)args[0])->_class;
}
static void visualtype_set_class(void* ret, void* const* args) {
    (void)ret;
    ((xcb_visualtype_t*)args[0])->_class = *(int*)args[1];
}
static void visualtype_get_bits_per_rgb_value(void* ret, void* const* args) {
    *(int*)ret = ((xcb_visualtype_t*)args[0])->bits_per_rgb_value;
}
static void visualtype_set_bits_per_rgb_value(void* ret, void* const* args) {
    (void)ret;
    ((xcb_visualtype_t*)args[0])->bits_per_rgb_value = *(int*)args[1];
}
static void visualtype_get_colormap_entries(void* ret, void* const* args) {
    *(int*)ret = ((xcb_visualtype_t*)args[0])->colormap_entries;
}
static void visualtype_set_colormap_entries(void* ret, void* const* args) {
    (void)ret;
    ((xcb_visualtype_t*)args[0])->colormap_entries = *(int*)args[1];
}
static void visualtype_get_red_mask(void* ret, void* const* args) {
    *(int*)ret = ((xcb_visualtype_t*)args[0])->red_mask;
}
static void visualtype_set_red_mask(void* ret, void* const* args) {
    (void)ret;
    ((xcb_visualtype_t*)args[0])->red_mask = *(int*)args[1];
}
static void visualtype_get_green_mask(void* ret, void* const* args) {
    *(int*)ret = ((xcb_visualtype_t*)args[0])->green_mask;
}
static void visualtype_set_green_mask(void* ret, void* const* args) {
    (void)ret;
    ((xcb_visualtype_t*)args[0])->green_mask = *(int*)args[1];
}
static void visualtype_get_blue_mask(void* ret, void* const* args) {
    *(int*)ret = ((xcb_visualtype_t*)args[0])->blue_mask;
}
static void visualtype_set_blue_mask(void* ret, void* const* args) {
    (void)ret;
    ((xcb_visualtype_t*)args[0])->blue_mask = *(int*)args[1];
}
static void depth_get_depth(void* ret, void* const* args) {
    *(int*)ret = ((xcb_depth_t*)args[0])->depth;
}
static void depth_set_depth(void* ret, void* const* args) {
    (void)ret;
    ((xcb_depth_t*)args[0])->depth = *(int*)args[1];
}
static void depth_get_visuals_len(void* ret, void* const* args) {
    *(int*)ret = ((xcb_depth_t*)args[0])->visuals_len;
}
static void depth_set_visuals_len(void* ret, void* const* args) {
    (void)ret;
    ((xcb_depth_t*)args[0])->visuals_len = *(int*)args[1];
}
static void depth_get_visuals(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_depth_t* s = args[0];
    int size = xcb_depth_visuals_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct(&xcb_depth_visuals_iterator(s).data[i]);
}
static void depth_visuals_length(void* ret, void* const* args) {
    xcb_depth_t* s = args[0];
    *(int*)ret = xcb_depth_visuals_length(s);
}
static void screen_get_root(void* ret, void* const* args) {
    *(int*)ret = ((xcb_screen_t*)args[0])->root;
}
static void screen_set_root(void* ret, void* const* args) {
    (void)ret;
    ((xcb_screen_t*)args[0])->root = *(int*)args[1];
}
static void screen_get_default_colormap(void* ret, void* const* args) {
    *(int*)ret = ((xcb_screen_t*)args[0])->default_colormap;
}
static void screen_set_default_colormap(void* ret, void* const* args) {
    (void)ret;
    ((xcb_screen_t*)args[0])->default_colormap = *(int*)args[1];
}
static void screen_get_white_pixel(void* ret, void* const* args) {
    *(int*)ret = ((xcb_screen_t*)args[0])->white_pixel;
}
static void screen_set_white_pixel(void* ret, void* const* args) {
    (void)ret;
    ((xcb_screen_t*)args[0])->white_pixel = *(int*)args[1];
}
static void screen_get_black_pixel(void* ret, void* const* args) {
    *(int*)ret = ((xcb_screen_t*)args[0])->black_pixel;
}
static void screen_set_black_pixel(void* ret, void* const* args) {
    (void)ret;
    ((xcb_screen_t*)args[0])->black_pixel = *(int*)args[1];
}
static void screen_get_current_input_masks(void* ret, void* const* args) {
    *(int*)ret = ((xcb_screen_t*)args[0])->current_input_masks;
}
static void screen_set_current_input_masks(void* ret, void* const* args) {
    (void)ret;
    ((xcb_screen_t*)args[0])->current_input_masks = *(int*)args[1];
}
static void screen_get_width_in_pixels(void* ret, void* const* args) {
    *(int*)ret = ((xcb_screen_t*)args[0])->width_in_pixels;
}
static void screen_set_width_in_pixels(void* ret, void* const* args) {
    (void)ret;
    ((xcb_screen_t*)args[0])->width_in_pixels = *(int*)args[1];
}
static void screen_get_height_in_pixels(void* ret, void* const* args) {
    *(int*)ret = ((xcb_screen_t*)args[0])->height_in_pixels;
}
static void screen_set_height_in_pixels(void* ret, void* const* args) {
    (void)ret;
    ((xcb_screen_t*)args[0])->height_in_pixels = *(int*)args[1];
}
static void screen_get_width_in_millimeters(void* ret, void* const* args) {
    *(int*)ret = ((xcb_screen_t*)args[0])->width_in_millimeters;
}
static void screen_set_width_in_millimeters(void* ret, void* const* args) {
    (void)ret;
    ((xcb_screen_t*)args[0])->width_in_millimeters = *(int*)args[1];
}
static void screen_get_height_in_millimeters(void* ret, void* const* args) {
    *(int*)ret = ((xcb_screen_t*)args[0])->height_in_millimeters;
}
static void screen_set_height_in_millimeters(void* ret, void* const* args) {
    (void)ret;
    ((xcb_screen_t*)args[0])->height_in_millimeters = *(int*)args[1];
}
static void screen_get_min_installed_maps(void* ret, void* const* args) {
    *(int*)ret = ((xcb_screen_t*)args[0])->min_installed_maps;
}
static void screen_set_min_installed_maps(void* ret, void* const* args) {
    (void)ret;
    ((xcb_screen_t*)args[0])->min_installed_maps = *(int*)args[1];
}
static void screen_get_max_installed_maps(void* ret, void* const* args) {
    *(int*)ret = ((xcb_screen_t*)args[0])->max_installed_maps;
}
static void screen_set_max_installed_maps(void* ret, void* const* args) {
    (void)ret;
    ((xcb_screen_t*)args[0])->max_installed_maps = *(int*)args[1];
}
static void screen_get_root_visual(void* ret, void* const* args) {
    *(int*)ret = ((xcb_screen_t*)args[0])->root_visual;
}
static void screen_set_root_visual(void* ret, void* const* args) {
    (void)ret;
    ((xcb_screen_t*)args[0])->root_visual = *(int*)args[1];
}
static void screen_get_backing_stores(void* ret, void* const* args) {
    *(int*)ret = ((xcb_screen_t*)args[0])->backing_stores;
}
static void screen_set_backing_stores(void* ret, void* const* args) {
    (void)ret;
    ((xcb_screen_t*)args[0])->backing_stores = *(int*)args[1];
}
static void screen_get_save_unders(void* ret, void* const* args) {
    *(int*)ret = ((xcb_screen_t*)args[0])->save_unders;
}
static void screen_set_save_unders(void* ret, void* const* args) {
    (void)ret;
    ((xcb_screen_t*)args[0])->save_unders = *(int*)args[1];
}
static void screen_get_root_depth(void* ret, void* const* args) {
    *(int*)ret = ((xcb_screen_t*)args[0])->root_depth;
}
static void screen_set_root_depth(void* ret, void* const* args) {
    (void)ret;
    ((xcb_screen_t*)args[0])->root_depth = *(int*)args[1];
}
static void screen_get_allowed_depths_len(void* ret, void* const* args) {
    *(int*)ret = ((xcb_screen_t*)args[0])->allowed_depths_len;
}
static void screen_set_allowed_depths_len(void* ret, void* const* args) {
    (void)ret;
    ((xcb_screen_t*)args[0])->allowed_depths_len = *(int*)args[1];
}
static void screen_get_allowed_depths(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_screen_t* s = args[0];
    int size = xcb_screen_allowed_depths_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct(&xcb_screen_allowed_depths_iterator(s).data[i]);
}
static void screen_allowed_depths_length(void* ret, void* const* args) {
    xcb_screen_t* s = args[0];
    *(int*)ret = xcb_screen_allowed_depths_length(s);
}
static void setup_request_get_byte_order(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_request_t*)args[0])->byte_order;
}
static void setup_request_set_byte_order(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_request_t*)args[0])->byte_order = *(int*)args[1];
}
static void setup_request_get_protocol_major_version(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_request_t*)args[0])->protocol_major_version;
}
static void setup_request_set_protocol_major_version(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_request_t*)args[0])->protocol_major_version = *(int*)args[1];
}
static void setup_request_get_protocol_minor_version(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_request_t*)args[0])->protocol_minor_version;
}
static void setup_request_set_protocol_minor_version(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_request_t*)args[0])->protocol_minor_version = *(int*)args[1];
}
static void setup_request_get_authorization_protocol_name_len(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_request_t*)args[0])->authorization_protocol_name_len;
}
static void setup_request_set_authorization_protocol_name_len(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_request_t*)args[0])->authorization_protocol_name_len = *(int*)args[1];
}
static void setup_request_get_authorization_protocol_data_len(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_request_t*)args[0])->authorization_protocol_data_len;
}
static void setup_request_set_authorization_protocol_data_len(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_request_t*)args[0])->authorization_protocol_data_len = *(int*)args[1];
}
static void setup_request_get_authorization_protocol_name(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_setup_request_t* s = args[0];
    int size = xcb_setup_request_authorization_protocol_name_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(char**)ret = strndup(xcb_setup_request_authorization_protocol_name(s), size);
}
static void setup_request_authorization_protocol_name_length(void* ret, void* const* args) {
    xcb_setup_request_t* s = args[0];
    *(int*)ret = xcb_setup_request_authorization_protocol_name_length(s);
}
static void setup_request_get_authorization_protocol_data(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_setup_request_t* s = args[0];
    int size = xcb_setup_request_authorization_protocol_data_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(char**)ret = strndup(xcb_setup_request_authorization_protocol_data(s), size);
}
static void setup_request_authorization_protocol_data_length(void* ret, void* const* args) {
    xcb_setup_request_t* s = args[0];
    *(int*)ret = xcb_setup_request_authorization_protocol_data_length(s);
}
static void setup_failed_get_status(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_failed_t*)args[0])->status;
}
static void setup_failed_set_status(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_failed_t*)args[0])->status = *(int*)args[1];
}
static void setup_failed_get_reason_len(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_failed_t*)args[0])->reason_len;
}
static void setup_failed_set_reason_len(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_failed_t*)args[0])->reason_len = *(int*)args[1];
}
static void setup_failed_get_protocol_major_version(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_failed_t*)args[0])->protocol_major_version;
}
static void setup_failed_set_protocol_major_version(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_failed_t*)args[0])->protocol_major_version = *(int*)args[1];
}
static void setup_failed_get_protocol_minor_version(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_failed_t*)args[0])->protocol_minor_version;
}
static void setup_failed_set_protocol_minor_version(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_failed_t*)args[0])->protocol_minor_version = *(int*)args[1];
}
static void setup_failed_get_length(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_failed_t*)args[0])->length;
}
static void setup_failed_set_length(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_failed_t*)args[0])->length = *(int*)args[1];
}
static void setup_failed_get_reason(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_setup_failed_t* s = args[0];
    int size = xcb_setup_failed_reason_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(char**)ret = strndup(xcb_setup_failed_reason(s), size);
}
static void setup_failed_reason_length(void* ret, void* const* args) {
    xcb_setup_failed_t* s = args[0];
    *(int*)ret = xcb_setup_failed_reason_length(s);
}
static void setup_authenticate_get_status(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_authenticate_t*)args[0])->status;
}
static void setup_authenticate_set_status(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_authenticate_t*)args[0])->status = *(int*)args[1];
}
static void setup_authenticate_get_length(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_authenticate_t*)args[0])->length;
}
static void setup_authenticate_set_length(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_authenticate_t*)args[0])->length = *(int*)args[1];
}
static void setup_authenticate_get_reason(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_setup_authenticate_t* s = args[0];
    int size = xcb_setup_authenticate_reason_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(char**)ret = strndup(xcb_setup_authenticate_reason(s), size);
}
static void setup_authenticate_reason_length(void* ret, void* const* args) {
    xcb_setup_authenticate_t* s = args[0];
    *(int*)ret = xcb_setup_authenticate_reason_length(s);
}
static void setup_get_status(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_t*)args[0])->status;
}
static void setup_set_status(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_t*)args[0])->status = *(int*)args[1];
}
static void setup_get_protocol_major_version(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_t*)args[0])->protocol_major_version;
}
static void setup_set_protocol_major_version(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_t*)args[0])->protocol_major_version = *(int*)args[1];
}
static void setup_get_protocol_minor_version(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_t*)args[0])->protocol_minor_version;
}
static void setup_set_protocol_minor_version(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_t*)args[0])->protocol_minor_version = *(int*)args[1];
}
static void setup_get_length(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_t*)args[0])->length;
}
static void setup_set_length(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_t*)args[0])->length = *(int*)args[1];
}
static void setup_get_release_number(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_t*)args[0])->release_number;
}
static void setup_set_release_number(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_t*)args[0])->release_number = *(int*)args[1];
}
static void setup_get_resource_id_base(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_t*)args[0])->resource_id_base;
}
static void setup_set_resource_id_base(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_t*)args[0])->resource_id_base = *(int*)args[1];
}
static void setup_get_resource_id_mask(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_t*)args[0])->resource_id_mask;
}
static void setup_set_resource_id_mask(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_t*)args[0])->resource_id_mask = *(int*)args[1];
}
static void setup_get_motion_buffer_size(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_t*)args[0])->motion_buffer_size;
}
static void setup_set_motion_buffer_size(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_t*)args[0])->motion_buffer_size = *(int*)args[1];
}
static void setup_get_vendor_len(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_t*)args[0])->vendor_len;
}
static void setup_set_vendor_len(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_t*)args[0])->vendor_len = *(int*)args[1];
}
static void setup_get_maximum_request_length(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_t*)args[0])->maximum_request_length;
}
static void setup_set_maximum_request_length(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_t*)args[0])->maximum_request_length = *(int*)args[1];
}
static void setup_get_roots_len(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_t*)args[0])->roots_len;
}
static void setup_set_roots_len(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_t*)args[0])->roots_len = *(int*)args[1];
}
static void setup_get_pixmap_formats_len(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_t*)args[0])->pixmap_formats_len;
}
static void setup_set_pixmap_formats_len(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_t*)args[0])->pixmap_formats_len = *(int*)args[1];
}
static void setup_get_image_byte_order(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_t*)args[0])->image_byte_order;
}
static void setup_set_image_byte_order(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_t*)args[0])->image_byte_order = *(int*)args[1];
}
static void setup_get_bitmap_format_bit_order(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_t*)args[0])->bitmap_format_bit_order;
}
static void setup_set_bitmap_format_bit_order(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_t*)args[0])->bitmap_format_bit_order = *(int*)args[1];
}
static void setup_get_bitmap_format_scanline_unit(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_t*)args[0])->bitmap_format_scanline_unit;
}
static void setup_set_bitmap_format_scanline_unit(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_t*)args[0])->bitmap_format_scanline_unit = *(int*)args[1];
}
static void setup_get_bitmap_format_scanline_pad(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_t*)args[0])->bitmap_format_scanline_pad;
}
static void setup_set_bitmap_format_scanline_pad(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_t*)args[0])->bitmap_format_scanline_pad = *(int*)args[1];
}
static void setup_get_min_keycode(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_t*)args[0])->min_keycode;
}
static void setup_set_min_keycode(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_t*)args[0])->min_keycode = *(int*)args[1];
}
static void setup_get_max_keycode(void* ret, void* const* args) {
    *(int*)ret = ((xcb_setup_t*)args[0])->max_keycode;
}
static void setup_set_max_keycode(void* ret, void* const* args) {
    (void)ret;
    ((xcb_setup_t*)args[0])->max_keycode = *(int*)args[1];
}
static void setup_get_vendor(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_setup_t* s = args[0];
    int size = xcb_setup_vendor_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(char**)ret = strndup(xcb_setup_vendor(s), size);
}
static void setup_vendor_length(void* ret, void* const* args) {
    xcb_setup_t* s = args[0];
    *(int*)ret = xcb_setup_vendor_length(s);
}
static void setup_get_pixmap_formats(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_setup_t* s = args[0];
    int size = xcb_setup_pixmap_formats_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct(&xcb_setup_pixmap_formats_iterator(s).data[i]);
}
static void setup_pixmap_formats_length(void* ret, void* const* args) {
    xcb_setup_t* s = args[0];
    *(int*)ret = xcb_setup_pixmap_formats_length(s);
}
static void setup_get_roots(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_setup_t* s = args[0];
    int size = xcb_setup_roots_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct(&xcb_setup_roots_iterator(s).data[i]);
}
static void setup_roots_length(void* ret, void* const* args) {
    xcb_setup_t* s = args[0];
    *(int*)ret = xcb_setup_roots_length(s);
}
static void key_press_event_get_detail(void* ret, void* const* args) {
    *(int*)ret = ((xcb_key_press_event_t*)args[0])->detail;
}
static void key_press_event_set_detail(void* ret, void* const* args) {
    (void)ret;
    ((xcb_key_press_event_t*)args[0])->detail = *(int*)args[1];
}
static void key_press_event_get_time(void* ret, void* const* args) {
    *(int*)ret = ((xcb_key_press_event_t*)args[0])->time;
}
static void key_press_event_set_time(void* ret, void* const* args) {
    (void)ret;
    ((xcb_key_press_event_t*)args[0])->time = *(int*)args[1];
}
static void key_press_event_get_root(void* ret, void* const* args) {
    *(int*)ret = ((xcb_key_press_event_t*)args[0])->root;
}
static void key_press_event_set_root(void* ret, void* const* args) {
    (void)ret;
    ((xcb_key_press_event_t*)args[0])->root = *(int*)args[1];
}
static void key_press_event_get_event(void* ret, void* const* args) {
    *(int*)ret = ((xcb_key_press_event_t*)args[0])->event;
}
static void key_press_event_set_event(void* ret, void* const* args) {
    (void)ret;
    ((xcb_key_press_event_t*)args[0])->event = *(int*)args[1];
}
static void key_press_event_get_child(void* ret, void* const* args) {
    *(int*)ret = ((xcb_key_press_event_t*)args[0])->child;
}
static void key_press_event_set_child(void* ret, void* const* args) {
    (void)ret;
    ((xcb_key_press_event_t*)args[0])->child = *(int*)args[1];
}
static void key_press_event_get_root_x(void* ret, void* const* args) {
    *(int*)ret = ((xcb_key_press_event_t*)args[0])->root_x;
}
static void key_press_event_set_root_x(void* ret, void* const* args) {
    (void)ret;
    ((xcb_key_press_event_t*)args[0])->root_x = *(int*)args[1];
}
static void key_press_event_get_root_y(void* ret, void* const* args) {
    *(int*)ret = ((xcb_key_press_event_t*)args[0])->root_y;
}
static void key_press_event_set_root_y(void* ret, void* const* args) {
    (void)ret;
    ((xcb_key_press_event_t*)args[0])->root_y = *(int*)args[1];
}
static void key_press_event_get_event_x(void* ret, void* const* args) {
    *(int*)ret = ((xcb_key_press_event_t*)args[0])->event_x;
}
static void key_press_event_set_event_x(void* ret, void* const* args) {
    (void)ret;
    ((xcb_key_press_event_t*)args[0])->event_x = *(int*)args[1];
}
static void key_press_event_get_event_y(void* ret, void* const* args) {
    *(int*)ret = ((xcb_key_press_event_t*)args[0])->event_y;
}
static void key_press_event_set_event_y(void* ret, void* const* args) {
    (void)ret;
    ((xcb_key_press_event_t*)args[0])->event_y = *(int*)args[1];
}
static void key_press_event_get_state(void* ret, void* const* args) {
    *(int*)ret = ((xcb_key_press_event_t*)args[0])->state;
}
static void key_press_event_set_state(void* ret, void* const* args) {
    (void)ret;
    ((xcb_key_press_event_t*)args[0])->state = *(int*)args[1];
}
static void key_press_event_get_same_screen(void* ret, void* const* args) {
    *(int*)ret = ((xcb_key_press_event_t*)args[0])->same_screen;
}
static void key_press_event_set_same_screen(void* ret, void* const* args) {
    (void)ret;
    ((xcb_key_press_event_t*)args[0])->same_screen = *(int*)args[1];
}
static void to_key_press_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_KEY_PRESS) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_key_press_event_t*)ev);
}
static void button_press_event_get_detail(void* ret, void* const* args) {
    *(int*)ret = ((xcb_button_press_event_t*)args[0])->detail;
}
static void button_press_event_set_detail(void* ret, void* const* args) {
    (void)ret;
    ((xcb_button_press_event_t*)args[0])->detail = *(int*)args[1];
}
static void button_press_event_get_time(void* ret, void* const* args) {
    *(int*)ret = ((xcb_button_press_event_t*)args[0])->time;
}
static void button_press_event_set_time(void* ret, void* const* args) {
    (void)ret;
    ((xcb_button_press_event_t*)args[0])->time = *(int*)args[1];
}
static void button_press_event_get_root(void* ret, void* const* args) {
    *(int*)ret = ((xcb_button_press_event_t*)args[0])->root;
}
static void button_press_event_set_root(void* ret, void* const* args) {
    (void)ret;
    ((xcb_button_press_event_t*)args[0])->root = *(int*)args[1];
}
static void button_press_event_get_event(void* ret, void* const* args) {
    *(int*)ret = ((xcb_button_press_event_t*)args[0])->event;
}
static void button_press_event_set_event(void* ret, void* const* args) {
    (void)ret;
    ((xcb_button_press_event_t*)args[0])->event = *(int*)args[1];
}
static void button_press_event_get_child(void* ret, void* const* args) {
    *(int*)ret = ((xcb_button_press_event_t*)args[0])->child;
}
static void button_press_event_set_child(void* ret, void* const* args) {
    (void)ret;
    ((xcb_button_press_event_t*)args[0])->child = *(int*)args[1];
}
static void button_press_event_get_root_x(void* ret, void* const* args) {
    *(int*)ret = ((xcb_button_press_event_t*)args[0])->root_x;
}
static void button_press_event_set_root_x(void* ret, void* const* args) {
    (void)ret;
    ((xcb_button_press_event_t*)args[0])->root_x = *(int*)args[1];
}
static void button_press_event_get_root_y(void* ret, void* const* args) {
    *(int*)ret = ((xcb_button_press_event_t*)args[0])->root_y;
}
static void button_press_event_set_root_y(void* ret, void* const* args) {
    (void)ret;
    ((xcb_button_press_event_t*)args[0])->root_y = *(int*)args[1];
}
static void button_press_event_get_event_x(void* ret, void* const* args) {
    *(int*)ret = ((xcb_button_press_event_t*)args[0])->event_x;
}
static void button_press_event_set_event_x(void* ret, void* const* args) {
    (void)ret;
    ((xcb_button_press_event_t*)args[0])->event_x = *(int*)args[1];
}
static void button_press_event_get_event_y(void* ret, void* const* args) {
    *(int*)ret = ((xcb_button_press_event_t*)args[0])->event_y;
}
static void button_press_event_set_event_y(void* ret, void* const* args) {
    (void)ret;
    ((xcb_button_press_event_t*)args[0])->event_y = *(int*)args[1];
}
static void button_press_event_get_state(void* ret, void* const* args) {
    *(int*)ret = ((xcb_button_press_event_t*)args[0])->state;
}
static void button_press_event_set_state(void* ret, void* const* args) {
    (void)ret;
    ((xcb_button_press_event_t*)args[0])->state = *(int*)args[1];
}
static void button_press_event_get_same_screen(void* ret, void* const* args) {
    *(int*)ret = ((xcb_button_press_event_t*)args[0])->same_screen;
}
static void button_press_event_set_same_screen(void* ret, void* const* args) {
    (void)ret;
    ((xcb_button_press_event_t*)args[0])->same_screen = *(int*)args[1];
}
static void to_button_press_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_BUTTON_PRESS) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_button_press_event_t*)ev);
}
static void motion_notify_event_get_detail(void* ret, void* const* args) {
    *(int*)ret = ((xcb_motion_notify_event_t*)args[0])->detail;
}
static void motion_notify_event_set_detail(void* ret, void* const* args) {
    (void)ret;
    ((xcb_motion_notify_event_t*)args[0])->detail = *(int*)args[1];
}
static void motion_notify_event_get_time(void* ret, void* const* args) {
    *(int*)ret = ((xcb_motion_notify_event_t*)args[0])->time;
}
static void motion_notify_event_set_time(void* ret, void* const* args) {
    (void)ret;
    ((xcb_motion_notify_event_t*)args[0])->time = *(int*)args[1];
}
static void motion_notify_event_get_root(void* ret, void* const* args) {
    *(int*)ret = ((xcb_motion_notify_event_t*)args[0])->root;
}
static void motion_notify_event_set_root(void* ret, void* const* args) {
    (void)ret;
    ((xcb_motion_notify_event_t*)args[0])->root = *(int*)args[1];
}
static void motion_notify_event_get_event(void* ret, void* const* args) {
    *(int*)ret = ((xcb_motion_notify_event_t*)args[0])->event;
}
static void motion_notify_event_set_event(void* ret, void* const* args) {
    (void)ret;
    ((xcb_motion_notify_event_t*)args[0])->event = *(int*)args[1];
}
static void motion_notify_event_get_child(void* ret, void* const* args) {
    *(int*)ret = ((xcb_motion_notify_event_t*)args[0])->child;
}
static void motion_notify_event_set_child(void* ret, void* const* args) {
    (void)ret;
    ((xcb_motion_notify_event_t*)args[0])->child = *(int*)args[1];
}
static void motion_notify_event_get_root_x(void* ret, void* const* args) {
    *(int*)ret = ((xcb_motion_notify_event_t*)args[0])->root_x;
}
static void motion_notify_event_set_root_x(void* ret, void* const* args) {
    (void)ret;
    ((xcb_motion_notify_event_t*)args[0])->root_x = *(int*)args[1];
}
static void motion_notify_event_get_root_y(void* ret, void* const* args) {
    *(int*)ret = ((xcb_motion_notify_event_t*)args[0])->root_y;
}
static void motion_notify_event_set_root_y(void* ret, void* const* args) {
    (void)ret;
    ((xcb_motion_notify_event_t*)args[0])->root_y = *(int*)args[1];
}
static void motion_notify_event_get_event_x(void* ret, void* const* args) {
    *(int*)ret = ((xcb_motion_notify_event_t*)args[0])->event_x;
}
static void motion_notify_event_set_event_x(void* ret, void* const* args) {
    (void)ret;
    ((xcb_motion_notify_event_t*)args[0])->event_x = *(int*)args[1];
}
static void motion_notify_event_get_event_y(void* ret, void* const* args) {
    *(int*)ret = ((xcb_motion_notify_event_t*)args[0])->event_y;
}
static void motion_notify_event_set_event_y(void* ret, void* const* args) {
    (void)ret;
    ((xcb_motion_notify_event_t*)args[0])->event_y = *(int*)args[1];
}
static void motion_notify_event_get_state(void* ret, void* const* args) {
    *(int*)ret = ((xcb_motion_notify_event_t*)args[0])->state;
}
static void motion_notify_event_set_state(void* ret, void* const* args) {
    (void)ret;
    ((xcb_motion_notify_event_t*)args[0])->state = *(int*)args[1];
}
static void motion_notify_event_get_same_screen(void* ret, void* const* args) {
    *(int*)ret = ((xcb_motion_notify_event_t*)args[0])->same_screen;
}
static void motion_notify_event_set_same_screen(void* ret, void* const* args) {
    (void)ret;
    ((xcb_motion_notify_event_t*)args[0])->same_screen = *(int*)args[1];
}
static void to_motion_notify_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_MOTION_NOTIFY) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_motion_notify_event_t*)ev);
}
static void enter_notify_event_get_detail(void* ret, void* const* args) {
    *(int*)ret = ((xcb_enter_notify_event_t*)args[0])->detail;
}
static void enter_notify_event_set_detail(void* ret, void* const* args) {
    (void)ret;
    ((xcb_enter_notify_event_t*)args[0])->detail = *(int*)args[1];
}
static void enter_notify_event_get_time(void* ret, void* const* args) {
    *(int*)ret = ((xcb_enter_notify_event_t*)args[0])->time;
}
static void enter_notify_event_set_time(void* ret, void* const* args) {
    (void)ret;
    ((xcb_enter_notify_event_t*)args[0])->time = *(int*)args[1];
}
static void enter_notify_event_get_root(void* ret, void* const* args) {
    *(int*)ret = ((xcb_enter_notify_event_t*)args[0])->root;
}
static void enter_notify_event_set_root(void* ret, void* const* args) {
    (void)ret;
    ((xcb_enter_notify_event_t*)args[0])->root = *(int*)args[1];
}
static void enter_notify_event_get_event(void* ret, void* const* args) {
    *(int*)ret = ((xcb_enter_notify_event_t*)args[0])->event;
}
static void enter_notify_event_set_event(void* ret, void* const* args) {
    (void)ret;
    ((xcb_enter_notify_event_t*)args[0])->event = *(int*)args[1];
}
static void enter_notify_event_get_child(void* ret, void* const* args) {
    *(int*)ret = ((xcb_enter_notify_event_t*)args[0])->child;
}
static void enter_notify_event_set_child(void* ret, void* const* args) {
    (void)ret;
    ((xcb_enter_notify_event_t*)args[0])->child = *(int*)args[1];
}
static void enter_notify_event_get_root_x(void* ret, void* const* args) {
    *(int*)ret = ((xcb_enter_notify_event_t*)args[0])->root_x;
}
static void enter_notify_event_set_root_x(void* ret, void* const* args) {
    (void)ret;
    ((xcb_enter_notify_event_t*)args[0])->root_x = *(int*)args[1];
}
static void enter_notify_event_get_root_y(void* ret, void* const* args) {
    *(int*)ret = ((xcb_enter_notify_event_t*)args[0])->root_y;
}
static void enter_notify_event_set_root_y(void* ret, void* const* args) {
    (void)ret;
    ((xcb_enter_notify_event_t*)args[0])->root_y = *(int*)args[1];
}
static void enter_notify_event_get_event_x(void* ret, void* const* args) {
    *(int*)ret = ((xcb_enter_notify_event_t*)args[0])->event_x;
}
static void enter_notify_event_set_event_x(void* ret, void* const* args) {
    (void)ret;
    ((xcb_enter_notify_event_t*)args[0])->event_x = *(int*)args[1];
}
static void enter_notify_event_get_event_y(void* ret, void* const* args) {
    *(int*)ret = ((xcb_enter_notify_event_t*)args[0])->event_y;
}
static void enter_notify_event_set_event_y(void* ret, void* const* args) {
    (void)ret;
    ((xcb_enter_notify_event_t*)args[0])->event_y = *(int*)args[1];
}
static void enter_notify_event_get_state(void* ret, void* const* args) {
    *(int*)ret = ((xcb_enter_notify_event_t*)args[0])->state;
}
static void enter_notify_event_set_state(void* ret, void* const* args) {
    (void)ret;
    ((xcb_enter_notify_event_t*)args[0])->state = *(int*)args[1];
}
static void enter_notify_event_get_mode(void* ret, void* const* args) {
    *(int*)ret = ((xcb_enter_notify_event_t*)args[0])->mode;
}
static void enter_notify_event_set_mode(void* ret, void* const* args) {
    (void)ret;
    ((xcb_enter_notify_event_t*)args[0])->mode = *(int*)args[1];
}
static void enter_notify_event_get_same_screen_focus(void* ret, void* const* args) {
    *(int*)ret = ((xcb_enter_notify_event_t*)args[0])->same_screen_focus;
}
static void enter_notify_event_set_same_screen_focus(void* ret, void* const* args) {
    (void)ret;
    ((xcb_enter_notify_event_t*)args[0])->same_screen_focus = *(int*)args[1];
}
static void to_enter_notify_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_ENTER_NOTIFY) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_enter_notify_event_t*)ev);
}
static void focus_in_event_get_detail(void* ret, void* const* args) {
    *(int*)ret = ((xcb_focus_in_event_t*)args[0])->detail;
}
static void focus_in_event_set_detail(void* ret, void* const* args) {
    (void)ret;
    ((xcb_focus_in_event_t*)args[0])->detail = *(int*)args[1];
}
static void focus_in_event_get_event(void* ret, void* const* args) {
    *(int*)ret = ((xcb_focus_in_event_t*)args[0])->event;
}
static void focus_in_event_set_event(void* ret, void* const* args) {
    (void)ret;
    ((xcb_focus_in_event_t*)args[0])->event = *(int*)args[1];
}
static void focus_in_event_get_mode(void* ret, void* const* args) {
    *(int*)ret = ((xcb_focus_in_event_t*)args[0])->mode;
}
static void focus_in_event_set_mode(void* ret, void* const* args) {
    (void)ret;
    ((xcb_focus_in_event_t*)args[0])->mode = *(int*)args[1];
}
static void to_focus_in_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_FOCUS_IN) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_focus_in_event_t*)ev);
}
static void to_keymap_notify_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_KEYMAP_NOTIFY) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_keymap_notify_event_t*)ev);
}
static void expose_event_get_window(void* ret, void* const* args) {
    *(int*)ret = ((xcb_expose_event_t*)args[0])->window;
}
static void expose_event_set_window(void* ret, void* const* args) {
    (void)ret;
    ((xcb_expose_event_t*)args[0])->window = *(int*)args[1];
}
static void expose_event_get_x(void* ret, void* const* args) {
    *(int*)ret = ((xcb_expose_event_t*)args[0])->x;
}
static void expose_event_set_x(void* ret, void* const* args) {
    (void)ret;
    ((xcb_expose_event_t*)args[0])->x = *(int*)args[1];
}
static void expose_event_get_y(void* ret, void* const* args) {
    *(int*)ret = ((xcb_expose_event_t*)args[0])->y;
}
static void expose_event_set_y(void* ret, void* const* args) {
    (void)ret;
    ((xcb_expose_event_t*)args[0])->y = *(int*)args[1];
}
static void expose_event_get_width(void* ret, void* const* args) {
    *(int*)ret = ((xcb_expose_event_t*)args[0])->width;
}
static void expose_event_set_width(void* ret, void* const* args) {
    (void)ret;
    ((xcb_expose_event_t*)args[0])->width = *(int*)args[1];
}
static void expose_event_get_height(void* ret, void* const* args) {
    *(int*)ret = ((xcb_expose_event_t*)args[0])->height;
}
static void expose_event_set_height(void* ret, void* const* args) {
    (void)ret;
    ((xcb_expose_event_t*)args[0])->height = *(int*)args[1];
}
static void expose_event_get_count(void* ret, void* const* args) {
    *(int*)ret = ((xcb_expose_event_t*)args[0])->count;
}
static void expose_event_set_count(void* ret, void* const* args) {
    (void)ret;
    ((xcb_expose_event_t*)args[0])->count = *(int*)args[1];
}
static void to_expose_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_EXPOSE) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_expose_event_t*)ev);
}
static void graphics_exposure_event_get_drawable(void* ret, void* const* args) {
    *(int*)ret = ((xcb_graphics_exposure_event_t*)args[0])->drawable;
}
static void graphics_exposure_event_set_drawable(void* ret, void* const* args) {
    (void)ret;
    ((xcb_graphics_exposure_event_t*)args[0])->drawable = *(int*)args[1];
}
static void graphics_exposure_event_get_x(void* ret, void* const* args) {
    *(int*)ret = ((xcb_graphics_exposure_event_t*)args[0])->x;
}
static void graphics_exposure_event_set_x(void* ret, void* const* args) {
    (void)ret;
    ((xcb_graphics_exposure_event_t*)args[0])->x = *(int*)args[1];
}
static void graphics_exposure_event_get_y(void* ret, void* const* args) {
    *(int*)ret = ((xcb_graphics_exposure_event_t*)args[0])->y;
}
static void graphics_exposure_event_set_y(void* ret, void* const* args) {
    (void)ret;
    ((xcb_graphics_exposure_event_t*)args[0])->y = *(int*)args[1];
}
static void graphics_exposure_event_get_width(void* ret, void* const* args) {
    *(int*)ret = ((xcb_graphics_exposure_event_t*)args[0])->width;
}
static void graphics_exposure_event_set_width(void* ret, void* const* args) {
    (void)ret;
    ((xcb_graphics_exposure_event_t*)args[0])->width = *(int*)args[1];
}
static void graphics_exposure_event_get_height(void* ret, void* const* args) {
    *(int*)ret = ((xcb_graphics_exposure_event_t*)args[0])->height;
}
static void graphics_exposure_event_set_height(void* ret, void* const* args) {
    (void)ret;
    ((xcb_graphics_exposure_event_t*)args[0])->height = *(int*)args[1];
}
static void graphics_exposure_event_get_minor_opcode(void* ret, void* const* args) {
    *(int*)ret = ((xcb_graphics_exposure_event_t*)args[0])->minor_opcode;
}
static void graphics_exposure_event_set_minor_opcode(void* ret, void* const* args) {
    (void)ret;
    ((xcb_graphics_exposure_event_t*)args[0])->minor_opcode = *(int*)args[1];
}
static void graphics_exposure_event_get_count(void* ret, void* const* args) {
    *(int*)ret = ((xcb_graphics_exposure_event_t*)args[0])->count;
}
static void graphics_exposure_event_set_count(void* ret, void* const* args) {
    (void)ret;
    ((xcb_graphics_exposure_event_t*)args[0])->count = *(int*)args[1];
}
static void graphics_exposure_event_get_major_opcode(void* ret, void* const* args) {
    *(int*)ret = ((xcb_graphics_exposure_event_t*)args[0])->major_opcode;
}
static void graphics_exposure_event_set_major_opcode(void* ret, void* const* args) {
    (void)ret;
    ((xcb_graphics_exposure_event_t*)args[0])->major_opcode = *(int*)args[1];
}
static void to_graphics_exposure_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_GRAPHICS_EXPOSURE) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_graphics_exposure_event_t*)ev);
}
static void no_exposure_event_get_drawable(void* ret, void* const* args) {
    *(int*)ret = ((xcb_no_exposure_event_t*)args[0])->drawable;
}
static void no_exposure_event_set_drawable(void* ret, void* const* args) {
    (void)ret;
    ((xcb_no_exposure_event_t*)args[0])->drawable = *(int*)args[1];
}
static void no_exposure_event_get_minor_opcode(void* ret, void* const* args) {
    *(int*)ret = ((xcb_no_exposure_event_t*)args[0])->minor_opcode;
}
static void no_exposure_event_set_minor_opcode(void* ret, void* const* args) {
    (void)ret;
    ((xcb_no_exposure_event_t*)args[0])->minor_opcode = *(int*)args[1];
}
static void no_exposure_event_get_major_opcode(void* ret, void* const* args) {
    *(int*)ret = ((xcb_no_exposure_event_t*)args[0])->major_opcode;
}
static void no_exposure_event_set_major_opcode(void* ret, void* const* args) {
    (void)ret;
    ((xcb_no_exposure_event_t*)args[0])->major_opcode = *(int*)args[1];
}
static void to_no_exposure_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_NO_EXPOSURE) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_no_exposure_event_t*)ev);
}
static void visibility_notify_event_get_window(void* ret, void* const* args) {
    *(int*)ret = ((xcb_visibility_notify_event_t*)args[0])->window;
}
static void visibility_notify_event_set_window(void* ret, void* const* args) {
    (void)ret;
    ((xcb_visibility_notify_event_t*)args[0])->window = *(int*)args[1];
}
static void visibility_notify_event_get_state(void* ret, void* const* args) {
    *(int*)ret = ((xcb_visibility_notify_event_t*)args[0])->state;
}
static void visibility_notify_event_set_state(void* ret, void* const* args) {
    (void)ret;
    ((xcb_visibility_notify_event_t*)args[0])->state = *(int*)args[1];
}
static void to_visibility_notify_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_VISIBILITY_NOTIFY) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_visibility_notify_event_t*)ev);
}
static void create_notify_event_get_parent(void* ret, void* const* args) {
    *(int*)ret = ((xcb_create_notify_event_t*)args[0])->parent;
}
static void create_notify_event_set_parent(void* ret, void* const* args) {
    (void)ret;
    ((xcb_create_notify_event_t*)args[0])->parent = *(int*)args[1];
}
static void create_notify_event_get_window(void* ret, void* const* args) {
    *(int*)ret = ((xcb_create_notify_event_t*)args[0])->window;
}
static void create_notify_event_set_window(void* ret, void* const* args) {
    (void)ret;
    ((xcb_create_notify_event_t*)args[0])->window = *(int*)args[1];
}
static void create_notify_event_get_x(void* ret, void* const* args) {
    *(int*)ret = ((xcb_create_notify_event_t*)args[0])->x;
}
static void create_notify_event_set_x(void* ret, void* const* args) {
    (void)ret;
    ((xcb_create_notify_event_t*)args[0])->x = *(int*)args[1];
}
static void create_notify_event_get_y(void* ret, void* const* args) {
    *(int*)ret = ((xcb_create_notify_event_t*)args[0])->y;
}
static void create_notify_event_set_y(void* ret, void* const* args) {
    (void)ret;
    ((xcb_create_notify_event_t*)args[0])->y = *(int*)args[1];
}
static void create_notify_event_get_width(void* ret, void* const* args) {
    *(int*)ret = ((xcb_create_notify_event_t*)args[0])->width;
}
static void create_notify_event_set_width(void* ret, void* const* args) {
    (void)ret;
    ((xcb_create_notify_event_t*)args[0])->width = *(int*)args[1];
}
static void create_notify_event_get_height(void* ret, void* const* args) {
    *(int*)ret = ((xcb_create_notify_event_t*)args[0])->height;
}
static void create_notify_event_set_height(void* ret, void* const* args) {
    (void)ret;
    ((xcb_create_notify_event_t*)args[0])->height = *(int*)args[1];
}
static void create_notify_event_get_border_width(void* ret, void* const* args) {
    *(int*)ret = ((xcb_create_notify_event_t*)args[0])->border_width;
}
static void create_notify_event_set_border_width(void* ret, void* const* args) {
    (void)ret;
    ((xcb_create_notify_event_t*)args[0])->border_width = *(int*)args[1];
}
static void create_notify_event_get_override_redirect(void* ret, void* const* args) {
    *(int*)ret = ((xcb_create_notify_event_t*)args[0])->override_redirect;
}
static void create_notify_event_set_override_redirect(void* ret, void* const* args) {
    (void)ret;
    ((xcb_create_notify_event_t*)args[0])->override_redirect = *(int*)args[1];
}
static void to_create_notify_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_CREATE_NOTIFY) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_create_notify_event_t*)ev);
}
static void destroy_notify_event_get_event(void* ret, void* const* args) {
    *(int*)ret = ((xcb_destroy_notify_event_t*)args[0])->event;
}
static void destroy_notify_event_set_event(void* ret, void* const* args) {
    (void)ret;
    ((xcb_destroy_notify_event_t*)args[0])->event = *(int*)args[1];
}
static void destroy_notify_event_get_window(void* ret, void* const* args) {
    *(int*)ret = ((xcb_destroy_notify_event_t*)args[0])->window;
}
static void destroy_notify_event_set_window(void* ret, void* const* args) {
    (void)ret;
    ((xcb_destroy_notify_event_t*)args[0])->window = *(int*)args[1];
}
static void to_destroy_notify_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_DESTROY_NOTIFY) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_destroy_notify_event_t*)ev);
}
static void unmap_notify_event_get_event(void* ret, void* const* args) {
    *(int*)ret = ((xcb_unmap_notify_event_t*)args[0])->event;
}
static void unmap_notify_event_set_event(void* ret, void* const* args) {
    (void)ret;
    ((xcb_unmap_notify_event_t*)args[0])->event = *(int*)args[1];
}
static void unmap_notify_event_get_window(void* ret, void* const* args) {
    *(int*)ret = ((xcb_unmap_notify_event_t*)args[0])->window;
}
static void unmap_notify_event_set_window(void* ret, void* const* args) {
    (void)ret;
    ((xcb_unmap_notify_event_t*)args[0])->window = *(int*)args[1];
}
static void unmap_notify_event_get_from_configure(void* ret, void* const* args) {
    *(int*)ret = ((xcb_unmap_notify_event_t*)args[0])->from_configure;
}
static void unmap_notify_event_set_from_configure(void* ret, void* const* args) {
    (void)ret;
    ((xcb_unmap_notify_event_t*)args[0])->from_configure = *(int*)args[1];
}
static void to_unmap_notify_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_UNMAP_NOTIFY) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_unmap_notify_event_t*)ev);
}
static void map_notify_event_get_event(void* ret, void* const* args) {
    *(int*)ret = ((xcb_map_notify_event_t*)args[0])->event;
}
static void map_notify_event_set_event(void* ret, void* const* args) {
    (void)ret;
    ((xcb_map_notify_event_t*)args[0])->event = *(int*)args[1];
}
static void map_notify_event_get_window(void* ret, void* const* args) {
    *(int*)ret = ((xcb_map_notify_event_t*)args[0])->window;
}
static void map_notify_event_set_window(void* ret, void* const* args) {
    (void)ret;
    ((xcb_map_notify_event_t*)args[0])->window = *(int*)args[1];
}
static void map_notify_event_get_override_redirect(void* ret, void* const* args) {
    *(int*)ret = ((xcb_map_notify_event_t*)args[0])->override_redirect;
}
static void map_notify_event_set_override_redirect(void* ret, void* const* args) {
    (void)ret;
    ((xcb_map_notify_event_t*)args[0])->override_redirect = *(int*)args[1];
}
static void to_map_notify_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_MAP_NOTIFY) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_map_notify_event_t*)ev);
}
static void map_request_event_get_parent(void* ret, void* const* args) {
    *(int*)ret = ((xcb_map_request_event_t*)args[0])->parent;
}
static void map_request_event_set_parent(void* ret, void* const* args) {
    (void)ret;
    ((xcb_map_request_event_t*)args[0])->parent = *(int*)args[1];
}
static void map_request_event_get_window(void* ret, void* const* args) {
    *(int*)ret = ((xcb_map_request_event_t*)args[0])->window;
}
static void map_request_event_set_window(void* ret, void* const* args) {
    (void)ret;
    ((xcb_map_request_event_t*)args[0])->window = *(int*)args[1];
}
static void to_map_request_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_MAP_REQUEST) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_map_request_event_t*)ev);
}
static void reparent_notify_event_get_event(void* ret, void* const* args) {
    *(int*)ret = ((xcb_reparent_notify_event_t*)args[0])->event;
}
static void reparent_notify_event_set_event(void* ret, void* const* args) {
    (void)ret;
    ((xcb_reparent_notify_event_t*)args[0])->event = *(int*)args[1];
}
static void reparent_notify_event_get_window(void* ret, void* const* args) {
    *(int*)ret = ((xcb_reparent_notify_event_t*)args[0])->window;
}
static void reparent_notify_event_set_window(void* ret, void* const* args) {
    (void)ret;
    ((xcb_reparent_notify_event_t*)args[0])->window = *(int*)args[1];
}
static void reparent_notify_event_get_parent(void* ret, void* const* args) {
    *(int*)ret = ((xcb_reparent_notify_event_t*)args[0])->parent;
}
static void reparent_notify_event_set_parent(void* ret, void* const* args) {
    (void)ret;
    ((xcb_reparent_notify_event_t*)args[0])->parent = *(int*)args[1];
}
static void reparent_notify_event_get_x(void* ret, void* const* args) {
    *(int*)ret = ((xcb_reparent_notify_event_t*)args[0])->x;
}
static void reparent_notify_event_set_x(void* ret, void* const* args) {
    (void)ret;
    ((xcb_reparent_notify_event_t*)args[0])->x = *(int*)args[1];
}
static void reparent_notify_event_get_y(void* ret, void* const* args) {
    *(int*)ret = ((xcb_reparent_notify_event_t*)args[0])->y;
}
static void reparent_notify_event_set_y(void* ret, void* const* args) {
    (void)ret;
    ((xcb_reparent_notify_event_t*)args[0])->y = *(int*)args[1];
}
static void reparent_notify_event_get_override_redirect(void* ret, void* const* args) {
    *(int*)ret = ((xcb_reparent_notify_event_t*)args[0])->override_redirect;
}
static void reparent_notify_event_set_override_redirect(void* ret, void* const* args) {
    (void)ret;
    ((xcb_reparent_notify_event_t*)args[0])->override_redirect = *(int*)args[1];
}
static void to_reparent_notify_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_REPARENT_NOTIFY) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_reparent_notify_event_t*)ev);
}
static void configure_notify_event_get_event(void* ret, void* const* args) {
    *(int*)ret = ((xcb_configure_notify_event_t*)args[0])->event;
}
static void configure_notify_event_set_event(void* ret, void* const* args) {
    (void)ret;
    ((xcb_configure_notify_event_t*)args[0])->event = *(int*)args[1];
}
static void configure_notify_event_get_window(void* ret, void* const* args) {
    *(int*)ret = ((xcb_configure_notify_event_t*)args[0])->window;
}
static void configure_notify_event_set_window(void* ret, void* const* args) {
    (void)ret;
    ((xcb_configure_notify_event_t*)args[0])->window = *(int*)args[1];
}
static void configure_notify_event_get_above_sibling(void* ret, void* const* args) {
    *(int*)ret = ((xcb_configure_notify_event_t*)args[0])->above_sibling;
}
static void configure_notify_event_set_above_sibling(void* ret, void* const* args) {
    (void)ret;
    ((xcb_configure_notify_event_t*)args[0])->above_sibling = *(int*)args[1];
}
static void configure_notify_event_get_x(void* ret, void* const* args) {
    *(int*)ret = ((xcb_configure_notify_event_t*)args[0])->x;
}
static void configure_notify_event_set_x(void* ret, void* const* args) {
    (void)ret;
    ((xcb_configure_notify_event_t*)args[0])->x = *(int*)args[1];
}
static void configure_notify_event_get_y(void* ret, void* const* args) {
    *(int*)ret = ((xcb_configure_notify_event_t*)args[0])->y;
}
static void configure_notify_event_set_y(void* ret, void* const* args) {
    (void)ret;
    ((xcb_configure_notify_event_t*)args[0])->y = *(int*)args[1];
}
static void configure_notify_event_get_width(void* ret, void* const* args) {
    *(int*)ret = ((xcb_configure_notify_event_t*)args[0])->width;
}
static void configure_notify_event_set_width(void* ret, void* const* args) {
    (void)ret;
    ((xcb_configure_notify_event_t*)args[0])->width = *(int*)args[1];
}
static void configure_notify_event_get_height(void* ret, void* const* args) {
    *(int*)ret = ((xcb_configure_notify_event_t*)args[0])->height;
}
static void configure_notify_event_set_height(void* ret, void* const* args) {
    (void)ret;
    ((xcb_configure_notify_event_t*)args[0])->height = *(int*)args[1];
}
static void configure_notify_event_get_border_width(void* ret, void* const* args) {
    *(int*)ret = ((xcb_configure_notify_event_t*)args[0])->border_width;
}
static void configure_notify_event_set_border_width(void* ret, void* const* args) {
    (void)ret;
    ((xcb_configure_notify_event_t*)args[0])->border_width = *(int*)args[1];
}
static void configure_notify_event_get_override_redirect(void* ret, void* const* args) {
    *(int*)ret = ((xcb_configure_notify_event_t*)args[0])->override_redirect;
}
static void configure_notify_event_set_override_redirect(void* ret, void* const* args) {
    (void)ret;
    ((xcb_configure_notify_event_t*)args[0])->override_redirect = *(int*)args[1];
}
static void to_configure_notify_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_CONFIGURE_NOTIFY) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_configure_notify_event_t*)ev);
}
static void configure_request_event_get_stack_mode(void* ret, void* const* args) {
    *(int*)ret = ((xcb_configure_request_event_t*)args[0])->stack_mode;
}
static void configure_request_event_set_stack_mode(void* ret, void* const* args) {
    (void)ret;
    ((xcb_configure_request_event_t*)args[0])->stack_mode = *(int*)args[1];
}
static void configure_request_event_get_parent(void* ret, void* const* args) {
    *(int*)ret = ((xcb_configure_request_event_t*)args[0])->parent;
}
static void configure_request_event_set_parent(void* ret, void* const* args) {
    (void)ret;
    ((xcb_configure_request_event_t*)args[0])->parent = *(int*)args[1];
}
static void configure_request_event_get_window(void* ret, void* const* args) {
    *(int*)ret = ((xcb_configure_request_event_t*)args[0])->window;
}
static void configure_request_event_set_window(void* ret, void* const* args) {
    (void)ret;
    ((xcb_configure_request_event_t*)args[0])->window = *(int*)args[1];
}
static void configure_request_event_get_sibling(void* ret, void* const* args) {
    *(int*)ret = ((xcb_configure_request_event_t*)args[0])->sibling;
}
static void configure_request_event_set_sibling(void* ret, void* const* args) {
    (void)ret;
    ((xcb_configure_request_event_t*)args[0])->sibling = *(int*)args[1];
}
static void configure_request_event_get_x(void* ret, void* const* args) {
    *(int*)ret = ((xcb_configure_request_event_t*)args[0])->x;
}
static void configure_request_event_set_x(void* ret, void* const* args) {
    (void)ret;
    ((xcb_configure_request_event_t*)args[0])->x = *(int*)args[1];
}
static void configure_request_event_get_y(void* ret, void* const* args) {
    *(int*)ret = ((xcb_configure_request_event_t*)args[0])->y;
}
static void configure_request_event_set_y(void* ret, void* const* args) {
    (void)ret;
    ((xcb_configure_request_event_t*)args[0])->y = *(int*)args[1];
}
static void configure_request_event_get_width(void* ret, void* const* args) {
    *(int*)ret = ((xcb_configure_request_event_t*)args[0])->width;
}
static void configure_request_event_set_width(void* ret, void* const* args) {
    (void)ret;
    ((xcb_configure_request_event_t*)args[0])->width = *(int*)args[1];
}
static void configure_request_event_get_height(void* ret, void* const* args) {
    *(int*)ret = ((xcb_configure_request_event_t*)args[0])->height;
}
static void configure_request_event_set_height(void* ret, void* const* args) {
    (void)ret;
    ((xcb_configure_request_event_t*)args[0])->height = *(int*)args[1];
}
static void configure_request_event_get_border_width(void* ret, void* const* args) {
    *(int*)ret = ((xcb_configure_request_event_t*)args[0])->border_width;
}
static void configure_request_event_set_border_width(void* ret, void* const* args) {
    (void)ret;
    ((xcb_configure_request_event_t*)args[0])->border_width = *(int*)args[1];
}
static void configure_request_event_get_value_mask(void* ret, void* const* args) {
    *(int*)ret = ((xcb_configure_request_event_t*)args[0])->value_mask;
}
static void configure_request_event_set_value_mask(void* ret, void* const* args) {
    (void)ret;
    ((xcb_configure_request_event_t*)args[0])->value_mask = *(int*)args[1];
}
static void to_configure_request_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_CONFIGURE_REQUEST) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_configure_request_event_t*)ev);
}
static void gravity_notify_event_get_event(void* ret, void* const* args) {
    *(int*)ret = ((xcb_gravity_notify_event_t*)args[0])->event;
}
static void gravity_notify_event_set_event(void* ret, void* const* args) {
    (void)ret;
    ((xcb_gravity_notify_event_t*)args[0])->event = *(int*)args[1];
}
static void gravity_notify_event_get_window(void* ret, void* const* args) {
    *(int*)ret = ((xcb_gravity_notify_event_t*)args[0])->window;
}
static void gravity_notify_event_set_window(void* ret, void* const* args) {
    (void)ret;
    ((xcb_gravity_notify_event_t*)args[0])->window = *(int*)args[1];
}
static void gravity_notify_event_get_x(void* ret, void* const* args) {
    *(int*)ret = ((xcb_gravity_notify_event_t*)args[0])->x;
}
static void gravity_notify_event_set_x(void* ret, void* const* args) {
    (void)ret;
    ((xcb_gravity_notify_event_t*)args[0])->x = *(int*)args[1];
}
static void gravity_notify_event_get_y(void* ret, void* const* args) {
    *(int*)ret = ((xcb_gravity_notify_event_t*)args[0])->y;
}
static void gravity_notify_event_set_y(void* ret, void* const* args) {
    (void)ret;
    ((xcb_gravity_notify_event_t*)args[0])->y = *(int*)args[1];
}
static void to_gravity_notify_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_GRAVITY_NOTIFY) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_gravity_notify_event_t*)ev);
}
static void resize_request_event_get_window(void* ret, void* const* args) {
    *(int*)ret = ((xcb_resize_request_event_t*)args[0])->window;
}
static void resize_request_event_set_window(void* ret, void* const* args) {
    (void)ret;
    ((xcb_resize_request_event_t*)args[0])->window = *(int*)args[1];
}
static void resize_request_event_get_width(void* ret, void* const* args) {
    *(int*)ret = ((xcb_resize_request_event_t*)args[0])->width;
}
static void resize_request_event_set_width(void* ret, void* const* args) {
    (void)ret;
    ((xcb_resize_request_event_t*)args[0])->width = *(int*)args[1];
}
static void resize_request_event_get_height(void* ret, void* const* args) {
    *(int*)ret = ((xcb_resize_request_event_t*)args[0])->height;
}
static void resize_request_event_set_height(void* ret, void* const* args) {
    (void)ret;
    ((xcb_resize_request_event_t*)args[0])->height = *(int*)args[1];
}
static void to_resize_request_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_RESIZE_REQUEST) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_resize_request_event_t*)ev);
}
static void circulate_notify_event_get_event(void* ret, void* const* args) {
    *(int*)ret = ((xcb_circulate_notify_event_t*)args[0])->event;
}
static void circulate_notify_event_set_event(void* ret, void* const* args) {
    (void)ret;
    ((xcb_circulate_notify_event_t*)args[0])->event = *(int*)args[1];
}
static void circulate_notify_event_get_window(void* ret, void* const* args) {
    *(int*)ret = ((xcb_circulate_notify_event_t*)args[0])->window;
}
static void circulate_notify_event_set_window(void* ret, void* const* args) {
    (void)ret;
    ((xcb_circulate_notify_event_t*)args[0])->window = *(int*)args[1];
}
static void circulate_notify_event_get_place(void* ret, void* const* args) {
    *(int*)ret = ((xcb_circulate_notify_event_t*)args[0])->place;
}
static void circulate_notify_event_set_place(void* ret, void* const* args) {
    (void)ret;
    ((xcb_circulate_notify_event_t*)args[0])->place = *(int*)args[1];
}
static void to_circulate_notify_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_CIRCULATE_NOTIFY) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_circulate_notify_event_t*)ev);
}
static void property_notify_event_get_window(void* ret, void* const* args) {
    *(int*)ret = ((xcb_property_notify_event_t*)args[0])->window;
}
static void property_notify_event_set_window(void* ret, void* const* args) {
    (void)ret;
    ((xcb_property_notify_event_t*)args[0])->window = *(int*)args[1];
}
static void property_notify_event_get_atom(void* ret, void* const* args) {
    *(int*)ret = ((xcb_property_notify_event_t*)args[0])->atom;
}
static void property_notify_event_set_atom(void* ret, void* const* args) {
    (void)ret;
    ((xcb_property_notify_event_t*)args[0])->atom = *(int*)args[1];
}
static void property_notify_event_get_time(void* ret, void* const* args) {
    *(int*)ret = ((xcb_property_notify_event_t*)args[0])->time;
}
static void property_notify_event_set_time(void* ret, void* const* args) {
    (void)ret;
    ((xcb_property_notify_event_t*)args[0])->time = *(int*)args[1];
}
static void property_notify_event_get_state(void* ret, void* const* args) {
    *(int*)ret = ((xcb_property_notify_event_t*)args[0])->state;
}
static void property_notify_event_set_state(void* ret, void* const* args) {
    (void)ret;
    ((xcb_property_notify_event_t*)args[0])->state = *(int*)args[1];
}
static void to_property_notify_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_PROPERTY_NOTIFY) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_property_notify_event_t*)ev);
}
static void selection_clear_event_get_time(void* ret, void* const* args) {
    *(int*)ret = ((xcb_selection_clear_event_t*)args[0])->time;
}
static void selection_clear_event_set_time(void* ret, void* const* args) {
    (void)ret;
    ((xcb_selection_clear_event_t*)args[0])->time = *(int*)args[1];
}
static void selection_clear_event_get_owner(void* ret, void* const* args) {
    *(int*)ret = ((xcb_selection_clear_event_t*)args[0])->owner;
}
static void selection_clear_event_set_owner(void* ret, void* const* args) {
    (void)ret;
    ((xcb_selection_clear_event_t*)args[0])->owner = *(int*)args[1];
}
static void selection_clear_event_get_selection(void* ret, void* const* args) {
    *(int*)ret = ((xcb_selection_clear_event_t*)args[0])->selection;
}
static void selection_clear_event_set_selection(void* ret, void* const* args) {
    (void)ret;
    ((xcb_selection_clear_event_t*)args[0])->selection = *(int*)args[1];
}
static void to_selection_clear_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_SELECTION_CLEAR) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_selection_clear_event_t*)ev);
}
static void selection_request_event_get_time(void* ret, void* const* args) {
    *(int*)ret = ((xcb_selection_request_event_t*)args[0])->time;
}
static void selection_request_event_set_time(void* ret, void* const* args) {
    (void)ret;
    ((xcb_selection_request_event_t*)args[0])->time = *(int*)args[1];
}
static void selection_request_event_get_owner(void* ret, void* const* args) {
    *(int*)ret = ((xcb_selection_request_event_t*)args[0])->owner;
}
static void selection_request_event_set_owner(void* ret, void* const* args) {
    (void)ret;
    ((xcb_selection_request_event_t*)args[0])->owner = *(int*)args[1];
}
static void selection_request_event_get_requestor(void* ret, void* const* args) {
    *(int*)ret = ((xcb_selection_request_event_t*)args[0])->requestor;
}
static void selection_request_event_set_requestor(void* ret, void* const* args) {
    (void)ret;
    ((xcb_selection_request_event_t*)args[0])->requestor = *(int*)args[1];
}
static void selection_request_event_get_selection(void* ret, void* const* args) {
    *(int*)ret = ((xcb_selection_request_event_t*)args[0])->selection;
}
static void selection_request_event_set_selection(void* ret, void* const* args) {
    (void)ret;
    ((xcb_selection_request_event_t*)args[0])->selection = *(int*)args[1];
}
static void selection_request_event_get_target(void* ret, void* const* args) {
    *(int*)ret = ((xcb_selection_request_event_t*)args[0])->target;
}
static void selection_request_event_set_target(void* ret, void* const* args) {
    (void)ret;
    ((xcb_selection_request_event_t*)args[0])->target = *(int*)args[1];
}
static void selection_request_event_get_property(void* ret, void* const* args) {
    *(int*)ret = ((xcb_selection_request_event_t*)args[0])->property;
}
static void selection_request_event_set_property(void* ret, void* const* args) {
    (void)ret;
    ((xcb_selection_request_event_t*)args[0])->property = *(int*)args[1];
}
static void to_selection_request_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_SELECTION_REQUEST) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_selection_request_event_t*)ev);
}
static void selection_notify_event_get_time(void* ret, void* const* args) {
    *(int*)ret = ((xcb_selection_notify_event_t*)args[0])->time;
}
static void selection_notify_event_set_time(void* ret, void* const* args) {
    (void)ret;
    ((xcb_selection_notify_event_t*)args[0])->time = *(int*)args[1];
}
static void selection_notify_event_get_requestor(void* ret, void* const* args) {
    *(int*)ret = ((xcb_selection_notify_event_t*)args[0])->requestor;
}
static void selection_notify_event_set_requestor(void* ret, void* const* args) {
    (void)ret;
    ((xcb_selection_notify_event_t*)args[0])->requestor = *(int*)args[1];
}
static void selection_notify_event_get_selection(void* ret, void* const* args) {
    *(int*)ret = ((xcb_selection_notify_event_t*)args[0])->selection;
}
static void selection_notify_event_set_selection(void* ret, void* const* args) {
    (void)ret;
    ((xcb_selection_notify_event_t*)args[0])->selection = *(int*)args[1];
}
static void selection_notify_event_get_target(void* ret, void* const* args) {
    *(int*)ret = ((xcb_selection_notify_event_t*)args[0])->target;
}
static void selection_notify_event_set_target(void* ret, void* const* args) {
    (void)ret;
    ((xcb_selection_notify_event_t*)args[0])->target = *(int*)args[1];
}
static void selection_notify_event_get_property(void* ret, void* const* args) {
    *(int*)ret = ((xcb_selection_notify_event_t*)args[0])->property;
}
static void selection_notify_event_set_property(void* ret, void* const* args) {
    (void)ret;
    ((xcb_selection_notify_event_t*)args[0])->property = *(int*)args[1];
}
static void to_selection_notify_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_SELECTION_NOTIFY) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_selection_notify_event_t*)ev);
}
static void colormap_notify_event_get_window(void* ret, void* const* args) {
    *(int*)ret = ((xcb_colormap_notify_event_t*)args[0])->window;
}
static void colormap_notify_event_set_window(void* ret, void* const* args) {
    (void)ret;
    ((xcb_colormap_notify_event_t*)args[0])->window = *(int*)args[1];
}
static void colormap_notify_event_get_colormap(void* ret, void* const* args) {
    *(int*)ret = ((xcb_colormap_notify_event_t*)args[0])->colormap;
}
static void colormap_notify_event_set_colormap(void* ret, void* const* args) {
    (void)ret;
    ((xcb_colormap_notify_event_t*)args[0])->colormap = *(int*)args[1];
}
static void colormap_notify_event_get_new(void* ret, void* const* args) {
    *(int*)ret = ((xcb_colormap_notify_event_t*)args[0])->_new;
}
static void colormap_notify_event_set_new(void* ret, void* const* args) {
    (void)ret;
    ((xcb_colormap_notify_event_t*)args[0])->_new = *(int*)args[1];
}
static void colormap_notify_event_get_state(void* ret, void* const* args) {
    *(int*)ret = ((xcb_colormap_notify_event_t*)args[0])->state;
}
static void colormap_notify_event_set_state(void* ret, void* const* args) {
    (void)ret;
    ((xcb_colormap_notify_event_t*)args[0])->state = *(int*)args[1];
}
static void to_colormap_notify_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_COLORMAP_NOTIFY) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_colormap_notify_event_t*)ev);
}
static void client_message_event_get_format(void* ret, void* const* args) {
    *(int*)ret = ((xcb_client_message_event_t*)args[0])->format;
}
static void client_message_event_set_format(void* ret, void* const* args) {
    (void)ret;
    ((xcb_client_message_event_t*)args[0])->format = *(int*)args[1];
}
static void client_message_event_get_window(void* ret, void* const* args) {
    *(int*)ret = ((xcb_client_message_event_t*)args[0])->window;
}
static void client_message_event_set_window(void* ret, void* const* args) {
    (void)ret;
    ((xcb_client_message_event_t*)args[0])->window = *(int*)args[1];
}
static void client_message_event_get_type(void* ret, void* const* args) {
    *(int*)ret = ((xcb_client_message_event_t*)args[0])->type;
}
static void client_message_event_set_type(void* ret, void* const* args) {
    (void)ret;
    ((xcb_client_message_event_t*)args[0])->type = *(int*)args[1];
}
static void to_client_message_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_CLIENT_MESSAGE) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_client_message_event_t*)ev);
}
static void mapping_notify_event_get_request(void* ret, void* const* args) {
    *(int*)ret = ((xcb_mapping_notify_event_t*)args[0])->request;
}
static void mapping_notify_event_set_request(void* ret, void* const* args) {
    (void)ret;
    ((xcb_mapping_notify_event_t*)args[0])->request = *(int*)args[1];
}
static void mapping_notify_event_get_first_keycode(void* ret, void* const* args) {
    *(int*)ret = ((xcb_mapping_notify_event_t*)args[0])->first_keycode;
}
static void mapping_notify_event_set_first_keycode(void* ret, void* const* args) {
    (void)ret;
    ((xcb_mapping_notify_event_t*)args[0])->first_keycode = *(int*)args[1];
}
static void mapping_notify_event_get_count(void* ret, void* const* args) {
    *(int*)ret = ((xcb_mapping_notify_event_t*)args[0])->count;
}
static void mapping_notify_event_set_count(void* ret, void* const* args) {
    (void)ret;
    ((xcb_mapping_notify_event_t*)args[0])->count = *(int*)args[1];
}
static void to_mapping_notify_event(void* ret, void* const* args) {
    xcb_generic_event_t* ev = args[0];
    if ((ev->response_type & ~0x80) != XCB_MAPPING_NOTIFY) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct((xcb_mapping_notify_event_t*)ev);
}
static void create_window(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_create_window(CONN(args[0]) ,
             *(int*)args[1] /* CARD8 */ ,
             *(int*)args[2] /* WINDOW */ ,
             *(int*)args[3] /* WINDOW */ ,
             *(int*)args[4] /* INT16 */ ,
             *(int*)args[5] /* INT16 */ ,
             *(int*)args[6] /* CARD16 */ ,
             *(int*)args[7] /* CARD16 */ ,
             *(int*)args[8] /* CARD16 */ ,
             *(int*)args[9] /* CARD16 */ ,
             *(int*)args[10] /* VISUALID */ ,
             *(int*)args[11] /* INT32 */ ,
             (uint32_t*)args[12]
        );
    *(void**)ret = (void*)c.sequence;
}
static void change_window_attributes(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_change_window_attributes(CONN(args[0]) ,
             *(int*)args[1] /* WINDOW */ ,
             *(int*)args[2] /* INT32 */ ,
             (uint32_t*)args[3]
        );
    *(void**)ret = (void*)c.sequence;
}
static void get_window_attributes(void* ret, void* const* args) {
    xcb_get_window_attributes_cookie_t c =
        xcb_get_window_attributes(CONN(args[0]) ,
             *(int*)args[1] /* WINDOW */
        );
    *(void**)ret = (void*)c.sequence;
}
static void destroy_window(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_destroy_window(CONN(args[0]) ,
             *(int*)args[1] /* WINDOW */
        );
    *(void**)ret = (void*)c.sequence;
}
static void destroy_subwindows(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_destroy_subwindows(CONN(args[0]) ,
             *(int*)args[1] /* WINDOW */
        );
    *(void**)ret = (void*)c.sequence;
}
static void change_save_set(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_change_save_set(CONN(args[0]) ,
             *(int*)args[1] /* BYTE */ ,
             *(int*)args[2] /* WINDOW */
        );
    *(void**)ret = (void*)c.sequence;
}
static void reparent_window(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_reparent_window(CONN(args[0]) ,
             *(int*)args[1] /* WINDOW */ ,
             *(int*)args[2] /* WINDOW */ ,
             *(int*)args[3] /* INT16 */ ,
             *(int*)args[4] /* INT16 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void map_window(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_map_window(CONN(args[0]) ,
             *(int*)args[1] /* WINDOW */
        );
    *(void**)ret = (void*)c.sequence;
}
static void map_subwindows(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_map_subwindows(CONN(args[0]) ,
             *(int*)args[1] /* WINDOW */
        );
    *(void**)ret = (void*)c.sequence;
}
static void unmap_window(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_unmap_window(CONN(args[0]) ,
             *(int*)args[1] /* WINDOW */
        );
    *(void**)ret = (void*)c.sequence;
}
static void unmap_subwindows(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_unmap_subwindows(CONN(args[0]) ,
             *(int*)args[1] /* WINDOW */
        );
    *(void**)ret = (void*)c.sequence;
}
static void circulate_window(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_circulate_window(CONN(args[0]) ,
             *(int*)args[1] /* CARD8 */ ,
             *(int*)args[2] /* WINDOW */
        );
    *(void**)ret = (void*)c.sequence;
}
static void get_geometry(void* ret, void* const* args) {
    xcb_get_geometry_cookie_t c =
        xcb_get_geometry(CONN(args[0]) ,
             *(int*)args[1] /* DRAWABLE */
        );
    *(void**)ret = (void*)c.sequence;
}
static void query_tree_get_children(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_query_tree_reply_t* s = args[0];
    int size = xcb_query_tree_children_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(int*)ret = xcb_query_tree_children(s)[i];
}
static void query_tree_children_length(void* ret, void* const* args) {
    xcb_query_tree_reply_t* s = args[0];
    *(int*)ret = xcb_query_tree_children_length(s);
}
static void query_tree(void* ret, void* const* args) {
    xcb_query_tree_cookie_t c =
        xcb_query_tree(CONN(args[0]) ,
             *(int*)args[1] /* WINDOW */
        );
    *(void**)ret = (void*)c.sequence;
}
static void intern_atom(void* ret, void* const* args) {
    xcb_intern_atom_cookie_t c =
        xcb_intern_atom(CONN(args[0]) ,
             *(int*)args[1] /* BOOL */ ,
             *(int*)args[2] /* CARD16 */ ,
             ((struct std2_buffer*)args[3])->data
        );
    *(void**)ret = (void*)c.sequence;
}
static void get_atom_name_get_name(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_get_atom_name_reply_t* s = args[0];
    int size = xcb_get_atom_name_name_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(char**)ret = strndup(xcb_get_atom_name_name(s), size);
}
static void get_atom_name_name_length(void* ret, void* const* args) {
    xcb_get_atom_name_reply_t* s = args[0];
    *(int*)ret = xcb_get_atom_name_name_length(s);
}
static void get_atom_name(void* ret, void* const* args) {
    xcb_get_atom_name_cookie_t c =
        xcb_get_atom_name(CONN(args[0]) ,
             *(int*)args[1] /* ATOM */
        );
    *(void**)ret = (void*)c.sequence;
}
static void delete_property(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_delete_property(CONN(args[0]) ,
             *(int*)args[1] /* WINDOW */ ,
             *(int*)args[2] /* ATOM */
        );
    *(void**)ret = (void*)c.sequence;
}
static void get_property_get_value(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_get_property_reply_t* s = args[0];
    int size = xcb_get_property_value_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = 0; // TODO: fix this
}
static void get_property_value_length(void* ret, void* const* args) {
    xcb_get_property_reply_t* s = args[0];
    *(int*)ret = xcb_get_property_value_length(s);
}
static void get_property(void* ret, void* const* args) {
    xcb_get_property_cookie_t c =
        xcb_get_property(CONN(args[0]) ,
             *(int*)args[1] /* BOOL */ ,
             *(int*)args[2] /* WINDOW */ ,
             *(int*)args[3] /* ATOM */ ,
             *(int*)args[4] /* ATOM */ ,
             *(int*)args[5] /* CARD32 */ ,
             *(int*)args[6] /* CARD32 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void list_properties_get_atoms(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_list_properties_reply_t* s = args[0];
    int size = xcb_list_properties_atoms_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(int*)ret = xcb_list_properties_atoms(s)[i];
}
static void list_properties_atoms_length(void* ret, void* const* args) {
    xcb_list_properties_reply_t* s = args[0];
    *(int*)ret = xcb_list_properties_atoms_length(s);
}
static void list_properties(void* ret, void* const* args) {
    xcb_list_properties_cookie_t c =
        xcb_list_properties(CONN(args[0]) ,
             *(int*)args[1] /* WINDOW */
        );
    *(void**)ret = (void*)c.sequence;
}
static void set_selection_owner(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_set_selection_owner(CONN(args[0]) ,
             *(int*)args[1] /* WINDOW */ ,
             *(int*)args[2] /* ATOM */ ,
             *(int*)args[3] /* TIMESTAMP */
        );
    *(void**)ret = (void*)c.sequence;
}
static void get_selection_owner(void* ret, void* const* args) {
    xcb_get_selection_owner_cookie_t c =
        xcb_get_selection_owner(CONN(args[0]) ,
             *(int*)args[1] /* ATOM */
        );
    *(void**)ret = (void*)c.sequence;
}
static void convert_selection(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_convert_selection(CONN(args[0]) ,
             *(int*)args[1] /* WINDOW */ ,
             *(int*)args[2] /* ATOM */ ,
             *(int*)args[3] /* ATOM */ ,
             *(int*)args[4] /* ATOM */ ,
             *(int*)args[5] /* TIMESTAMP */
        );
    *(void**)ret = (void*)c.sequence;
}
static void send_event(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_send_event(CONN(args[0]) ,
             *(int*)args[1] /* BOOL */ ,
             *(int*)args[2] /* WINDOW */ ,
             *(int*)args[3] /* CARD32 */ ,
             ((struct std2_buffer*)args[4])->data
        );
    *(void**)ret = (void*)c.sequence;
}
static void grab_pointer(void* ret, void* const* args) {
    xcb_grab_pointer_cookie_t c =
        xcb_grab_pointer(CONN(args[0]) ,
             *(int*)args[1] /* BOOL */ ,
             *(int*)args[2] /* WINDOW */ ,
             *(int*)args[3] /* CARD16 */ ,
             *(int*)args[4] /* BYTE */ ,
             *(int*)args[5] /* BYTE */ ,
             *(int*)args[6] /* WINDOW */ ,
             *(int*)args[7] /* CURSOR */ ,
             *(int*)args[8] /* TIMESTAMP */
        );
    *(void**)ret = (void*)c.sequence;
}
static void ungrab_pointer(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_ungrab_pointer(CONN(args[0]) ,
             *(int*)args[1] /* TIMESTAMP */
        );
    *(void**)ret = (void*)c.sequence;
}
static void grab_button(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_grab_button(CONN(args[0]) ,
             *(int*)args[1] /* BOOL */ ,
             *(int*)args[2] /* WINDOW */ ,
             *(int*)args[3] /* CARD16 */ ,
             *(int*)args[4] /* CARD8 */ ,
             *(int*)args[5] /* CARD8 */ ,
             *(int*)args[6] /* WINDOW */ ,
             *(int*)args[7] /* CURSOR */ ,
             *(int*)args[8] /* CARD8 */ ,
             *(int*)args[9] /* CARD16 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void ungrab_button(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_ungrab_button(CONN(args[0]) ,
             *(int*)args[1] /* CARD8 */ ,
             *(int*)args[2] /* WINDOW */ ,
             *(int*)args[3] /* CARD16 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void change_active_pointer_grab(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_change_active_pointer_grab(CONN(args[0]) ,
             *(int*)args[1] /* CURSOR */ ,
             *(int*)args[2] /* TIMESTAMP */ ,
             *(int*)args[3] /* CARD16 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void grab_keyboard(void* ret, void* const* args) {
    xcb_grab_keyboard_cookie_t c =
        xcb_grab_keyboard(CONN(args[0]) ,
             *(int*)args[1] /* BOOL */ ,
             *(int*)args[2] /* WINDOW */ ,
             *(int*)args[3] /* TIMESTAMP */ ,
             *(int*)args[4] /* BYTE */ ,
             *(int*)args[5] /* BYTE */
        );
    *(void**)ret = (void*)c.sequence;
}
static void ungrab_keyboard(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_ungrab_keyboard(CONN(args[0]) ,
             *(int*)args[1] /* TIMESTAMP */
        );
    *(void**)ret = (void*)c.sequence;
}
static void grab_key(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_grab_key(CONN(args[0]) ,
             *(int*)args[1] /* BOOL */ ,
             *(int*)args[2] /* WINDOW */ ,
             *(int*)args[3] /* CARD16 */ ,
             *(int*)args[4] /* KEYCODE */ ,
             *(int*)args[5] /* CARD8 */ ,
             *(int*)args[6] /* CARD8 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void ungrab_key(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_ungrab_key(CONN(args[0]) ,
             *(int*)args[1] /* KEYCODE */ ,
             *(int*)args[2] /* WINDOW */ ,
             *(int*)args[3] /* CARD16 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void allow_events(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_allow_events(CONN(args[0]) ,
             *(int*)args[1] /* CARD8 */ ,
             *(int*)args[2] /* TIMESTAMP */
        );
    *(void**)ret = (void*)c.sequence;
}
static void grab_server(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_grab_server(CONN(args[0])
        );
    *(void**)ret = (void*)c.sequence;
}
static void ungrab_server(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_ungrab_server(CONN(args[0])
        );
    *(void**)ret = (void*)c.sequence;
}
static void query_pointer(void* ret, void* const* args) {
    xcb_query_pointer_cookie_t c =
        xcb_query_pointer(CONN(args[0]) ,
             *(int*)args[1] /* WINDOW */
        );
    *(void**)ret = (void*)c.sequence;
}
static void timecoord_get_time(void* ret, void* const* args) {
    *(int*)ret = ((xcb_timecoord_t*)args[0])->time;
}
static void timecoord_set_time(void* ret, void* const* args) {
    (void)ret;
    ((xcb_timecoord_t*)args[0])->time = *(int*)args[1];
}
static void timecoord_get_x(void* ret, void* const* args) {
    *(int*)ret = ((xcb_timecoord_t*)args[0])->x;
}
static void timecoord_set_x(void* ret, void* const* args) {
    (void)ret;
    ((xcb_timecoord_t*)args[0])->x = *(int*)args[1];
}
static void timecoord_get_y(void* ret, void* const* args) {
    *(int*)ret = ((xcb_timecoord_t*)args[0])->y;
}
static void timecoord_set_y(void* ret, void* const* args) {
    (void)ret;
    ((xcb_timecoord_t*)args[0])->y = *(int*)args[1];
}
static void get_motion_events_get_events(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_get_motion_events_reply_t* s = args[0];
    int size = xcb_get_motion_events_events_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct(&xcb_get_motion_events_events_iterator(s).data[i]);
}
static void get_motion_events_events_length(void* ret, void* const* args) {
    xcb_get_motion_events_reply_t* s = args[0];
    *(int*)ret = xcb_get_motion_events_events_length(s);
}
static void get_motion_events(void* ret, void* const* args) {
    xcb_get_motion_events_cookie_t c =
        xcb_get_motion_events(CONN(args[0]) ,
             *(int*)args[1] /* WINDOW */ ,
             *(int*)args[2] /* TIMESTAMP */ ,
             *(int*)args[3] /* TIMESTAMP */
        );
    *(void**)ret = (void*)c.sequence;
}
static void translate_coordinates(void* ret, void* const* args) {
    xcb_translate_coordinates_cookie_t c =
        xcb_translate_coordinates(CONN(args[0]) ,
             *(int*)args[1] /* WINDOW */ ,
             *(int*)args[2] /* WINDOW */ ,
             *(int*)args[3] /* INT16 */ ,
             *(int*)args[4] /* INT16 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void warp_pointer(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_warp_pointer(CONN(args[0]) ,
             *(int*)args[1] /* WINDOW */ ,
             *(int*)args[2] /* WINDOW */ ,
             *(int*)args[3] /* INT16 */ ,
             *(int*)args[4] /* INT16 */ ,
             *(int*)args[5] /* CARD16 */ ,
             *(int*)args[6] /* CARD16 */ ,
             *(int*)args[7] /* INT16 */ ,
             *(int*)args[8] /* INT16 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void set_input_focus(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_set_input_focus(CONN(args[0]) ,
             *(int*)args[1] /* CARD8 */ ,
             *(int*)args[2] /* WINDOW */ ,
             *(int*)args[3] /* TIMESTAMP */
        );
    *(void**)ret = (void*)c.sequence;
}
static void get_input_focus(void* ret, void* const* args) {
    xcb_get_input_focus_cookie_t c =
        xcb_get_input_focus(CONN(args[0])
        );
    *(void**)ret = (void*)c.sequence;
}
static void query_keymap_get_keys(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_query_keymap_reply_t* s = args[0];
    int size = xcb_query_keymap_keys_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(int*)ret = xcb_query_keymap_keys(s)[i];
}
static void query_keymap_keys_length(void* ret, void* const* args) {
    xcb_query_keymap_reply_t* s = args[0];
    *(int*)ret = xcb_query_keymap_keys_length(s);
}
static void query_keymap(void* ret, void* const* args) {
    xcb_query_keymap_cookie_t c =
        xcb_query_keymap(CONN(args[0])
        );
    *(void**)ret = (void*)c.sequence;
}
static void open_font(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_open_font(CONN(args[0]) ,
             *(int*)args[1] /* FONT */ ,
             *(int*)args[2] /* CARD16 */ ,
             ((struct std2_buffer*)args[3])->data
        );
    *(void**)ret = (void*)c.sequence;
}
static void close_font(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_close_font(CONN(args[0]) ,
             *(int*)args[1] /* FONT */
        );
    *(void**)ret = (void*)c.sequence;
}
static void fontprop_get_name(void* ret, void* const* args) {
    *(int*)ret = ((xcb_fontprop_t*)args[0])->name;
}
static void fontprop_set_name(void* ret, void* const* args) {
    (void)ret;
    ((xcb_fontprop_t*)args[0])->name = *(int*)args[1];
}
static void fontprop_get_value(void* ret, void* const* args) {
    *(int*)ret = ((xcb_fontprop_t*)args[0])->value;
}
static void fontprop_set_value(void* ret, void* const* args) {
    (void)ret;
    ((xcb_fontprop_t*)args[0])->value = *(int*)args[1];
}
static void charinfo_get_left_side_bearing(void* ret, void* const* args) {
    *(int*)ret = ((xcb_charinfo_t*)args[0])->left_side_bearing;
}
static void charinfo_set_left_side_bearing(void* ret, void* const* args) {
    (void)ret;
    ((xcb_charinfo_t*)args[0])->left_side_bearing = *(int*)args[1];
}
static void charinfo_get_right_side_bearing(void* ret, void* const* args) {
    *(int*)ret = ((xcb_charinfo_t*)args[0])->right_side_bearing;
}
static void charinfo_set_right_side_bearing(void* ret, void* const* args) {
    (void)ret;
    ((xcb_charinfo_t*)args[0])->right_side_bearing = *(int*)args[1];
}
static void charinfo_get_character_width(void* ret, void* const* args) {
    *(int*)ret = ((xcb_charinfo_t*)args[0])->character_width;
}
static void charinfo_set_character_width(void* ret, void* const* args) {
    (void)ret;
    ((xcb_charinfo_t*)args[0])->character_width = *(int*)args[1];
}
static void charinfo_get_ascent(void* ret, void* const* args) {
    *(int*)ret = ((xcb_charinfo_t*)args[0])->ascent;
}
static void charinfo_set_ascent(void* ret, void* const* args) {
    (void)ret;
    ((xcb_charinfo_t*)args[0])->ascent = *(int*)args[1];
}
static void charinfo_get_descent(void* ret, void* const* args) {
    *(int*)ret = ((xcb_charinfo_t*)args[0])->descent;
}
static void charinfo_set_descent(void* ret, void* const* args) {
    (void)ret;
    ((xcb_charinfo_t*)args[0])->descent = *(int*)args[1];
}
static void charinfo_get_attributes(void* ret, void* const* args) {
    *(int*)ret = ((xcb_charinfo_t*)args[0])->attributes;
}
static void charinfo_set_attributes(void* ret, void* const* args) {
    (void)ret;
    ((xcb_charinfo_t*)args[0])->attributes = *(int*)args[1];
}
static void query_font_get_properties(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_query_font_reply_t* s = args[0];
    int size = xcb_query_font_properties_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct(&xcb_query_font_properties_iterator(s).data[i]);
}
static void query_font_properties_length(void* ret, void* const* args) {
    xcb_query_font_reply_t* s = args[0];
    *(int*)ret = xcb_query_font_properties_length(s);
}
static void query_font_get_char_infos(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_query_font_reply_t* s = args[0];
    int size = xcb_query_font_char_infos_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct(&xcb_query_font_char_infos_iterator(s).data[i]);
}
static void query_font_char_infos_length(void* ret, void* const* args) {
    xcb_query_font_reply_t* s = args[0];
    *(int*)ret = xcb_query_font_char_infos_length(s);
}
static void query_font(void* ret, void* const* args) {
    xcb_query_font_cookie_t c =
        xcb_query_font(CONN(args[0]) ,
             *(int*)args[1] /* FONTABLE */
        );
    *(void**)ret = (void*)c.sequence;
}
static void str_get_name_len(void* ret, void* const* args) {
    *(int*)ret = ((xcb_str_t*)args[0])->name_len;
}
static void str_set_name_len(void* ret, void* const* args) {
    (void)ret;
    ((xcb_str_t*)args[0])->name_len = *(int*)args[1];
}
static void str_get_name(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_str_t* s = args[0];
    int size = xcb_str_name_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(char**)ret = strndup(xcb_str_name(s), size);
}
static void str_name_length(void* ret, void* const* args) {
    xcb_str_t* s = args[0];
    *(int*)ret = xcb_str_name_length(s);
}
static void list_fonts_get_names(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_list_fonts_reply_t* s = args[0];
    int size = xcb_list_fonts_names_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct(&xcb_list_fonts_names_iterator(s).data[i]);
}
static void list_fonts_names_length(void* ret, void* const* args) {
    xcb_list_fonts_reply_t* s = args[0];
    *(int*)ret = xcb_list_fonts_names_length(s);
}
static void list_fonts(void* ret, void* const* args) {
    xcb_list_fonts_cookie_t c =
        xcb_list_fonts(CONN(args[0]) ,
             *(int*)args[1] /* CARD16 */ ,
             *(int*)args[2] /* CARD16 */ ,
             ((struct std2_buffer*)args[3])->data
        );
    *(void**)ret = (void*)c.sequence;
}
static void list_fonts_with_info_get_properties(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_list_fonts_with_info_reply_t* s = args[0];
    int size = xcb_list_fonts_with_info_properties_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct(&xcb_list_fonts_with_info_properties_iterator(s).data[i]);
}
static void list_fonts_with_info_properties_length(void* ret, void* const* args) {
    xcb_list_fonts_with_info_reply_t* s = args[0];
    *(int*)ret = xcb_list_fonts_with_info_properties_length(s);
}
static void list_fonts_with_info_get_name(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_list_fonts_with_info_reply_t* s = args[0];
    int size = xcb_list_fonts_with_info_name_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(char**)ret = strndup(xcb_list_fonts_with_info_name(s), size);
}
static void list_fonts_with_info_name_length(void* ret, void* const* args) {
    xcb_list_fonts_with_info_reply_t* s = args[0];
    *(int*)ret = xcb_list_fonts_with_info_name_length(s);
}
static void list_fonts_with_info(void* ret, void* const* args) {
    xcb_list_fonts_with_info_cookie_t c =
        xcb_list_fonts_with_info(CONN(args[0]) ,
             *(int*)args[1] /* CARD16 */ ,
             *(int*)args[2] /* CARD16 */ ,
             ((struct std2_buffer*)args[3])->data
        );
    *(void**)ret = (void*)c.sequence;
}
static void set_font_path(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_set_font_path(CONN(args[0]) ,
             *(int*)args[1] /* CARD16 */ ,
             *(int*)args[2] /* INT32 */ ,
             ((struct std2_buffer*)args[3])->data
        );
    *(void**)ret = (void*)c.sequence;
}
static void get_font_path_get_path(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_get_font_path_reply_t* s = args[0];
    int size = xcb_get_font_path_path_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct(&xcb_get_font_path_path_iterator(s).data[i]);
}
static void get_font_path_path_length(void* ret, void* const* args) {
    xcb_get_font_path_reply_t* s = args[0];
    *(int*)ret = xcb_get_font_path_path_length(s);
}
static void get_font_path(void* ret, void* const* args) {
    xcb_get_font_path_cookie_t c =
        xcb_get_font_path(CONN(args[0])
        );
    *(void**)ret = (void*)c.sequence;
}
static void create_pixmap(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_create_pixmap(CONN(args[0]) ,
             *(int*)args[1] /* CARD8 */ ,
             *(int*)args[2] /* PIXMAP */ ,
             *(int*)args[3] /* DRAWABLE */ ,
             *(int*)args[4] /* CARD16 */ ,
             *(int*)args[5] /* CARD16 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void free_pixmap(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_free_pixmap(CONN(args[0]) ,
             *(int*)args[1] /* PIXMAP */
        );
    *(void**)ret = (void*)c.sequence;
}
static void create_gc(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_create_gc(CONN(args[0]) ,
             *(int*)args[1] /* GCONTEXT */ ,
             *(int*)args[2] /* DRAWABLE */ ,
             *(int*)args[3] /* INT32 */ ,
             (uint32_t*)args[4]
        );
    *(void**)ret = (void*)c.sequence;
}
static void change_gc(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_change_gc(CONN(args[0]) ,
             *(int*)args[1] /* GCONTEXT */ ,
             *(int*)args[2] /* INT32 */ ,
             (uint32_t*)args[3]
        );
    *(void**)ret = (void*)c.sequence;
}
static void copy_gc(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_copy_gc(CONN(args[0]) ,
             *(int*)args[1] /* GCONTEXT */ ,
             *(int*)args[2] /* GCONTEXT */ ,
             *(int*)args[3] /* CARD32 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void free_gc(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_free_gc(CONN(args[0]) ,
             *(int*)args[1] /* GCONTEXT */
        );
    *(void**)ret = (void*)c.sequence;
}
static void clear_area(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_clear_area(CONN(args[0]) ,
             *(int*)args[1] /* BOOL */ ,
             *(int*)args[2] /* WINDOW */ ,
             *(int*)args[3] /* INT16 */ ,
             *(int*)args[4] /* INT16 */ ,
             *(int*)args[5] /* CARD16 */ ,
             *(int*)args[6] /* CARD16 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void copy_area(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_copy_area(CONN(args[0]) ,
             *(int*)args[1] /* DRAWABLE */ ,
             *(int*)args[2] /* DRAWABLE */ ,
             *(int*)args[3] /* GCONTEXT */ ,
             *(int*)args[4] /* INT16 */ ,
             *(int*)args[5] /* INT16 */ ,
             *(int*)args[6] /* INT16 */ ,
             *(int*)args[7] /* INT16 */ ,
             *(int*)args[8] /* CARD16 */ ,
             *(int*)args[9] /* CARD16 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void copy_plane(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_copy_plane(CONN(args[0]) ,
             *(int*)args[1] /* DRAWABLE */ ,
             *(int*)args[2] /* DRAWABLE */ ,
             *(int*)args[3] /* GCONTEXT */ ,
             *(int*)args[4] /* INT16 */ ,
             *(int*)args[5] /* INT16 */ ,
             *(int*)args[6] /* INT16 */ ,
             *(int*)args[7] /* INT16 */ ,
             *(int*)args[8] /* CARD16 */ ,
             *(int*)args[9] /* CARD16 */ ,
             *(int*)args[10] /* CARD32 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void segment_get_x1(void* ret, void* const* args) {
    *(int*)ret = ((xcb_segment_t*)args[0])->x1;
}
static void segment_set_x1(void* ret, void* const* args) {
    (void)ret;
    ((xcb_segment_t*)args[0])->x1 = *(int*)args[1];
}
static void segment_get_y1(void* ret, void* const* args) {
    *(int*)ret = ((xcb_segment_t*)args[0])->y1;
}
static void segment_set_y1(void* ret, void* const* args) {
    (void)ret;
    ((xcb_segment_t*)args[0])->y1 = *(int*)args[1];
}
static void segment_get_x2(void* ret, void* const* args) {
    *(int*)ret = ((xcb_segment_t*)args[0])->x2;
}
static void segment_set_x2(void* ret, void* const* args) {
    (void)ret;
    ((xcb_segment_t*)args[0])->x2 = *(int*)args[1];
}
static void segment_get_y2(void* ret, void* const* args) {
    *(int*)ret = ((xcb_segment_t*)args[0])->y2;
}
static void segment_set_y2(void* ret, void* const* args) {
    (void)ret;
    ((xcb_segment_t*)args[0])->y2 = *(int*)args[1];
}
static void get_image_get_data(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_get_image_reply_t* s = args[0];
    int size = xcb_get_image_data_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(int*)ret = xcb_get_image_data(s)[i];
}
static void get_image_data_length(void* ret, void* const* args) {
    xcb_get_image_reply_t* s = args[0];
    *(int*)ret = xcb_get_image_data_length(s);
}
static void get_image(void* ret, void* const* args) {
    xcb_get_image_cookie_t c =
        xcb_get_image(CONN(args[0]) ,
             *(int*)args[1] /* CARD8 */ ,
             *(int*)args[2] /* DRAWABLE */ ,
             *(int*)args[3] /* INT16 */ ,
             *(int*)args[4] /* INT16 */ ,
             *(int*)args[5] /* CARD16 */ ,
             *(int*)args[6] /* CARD16 */ ,
             *(int*)args[7] /* CARD32 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void image_text_8(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_image_text_8(CONN(args[0]) ,
             *(int*)args[1] /* BYTE */ ,
             *(int*)args[2] /* DRAWABLE */ ,
             *(int*)args[3] /* GCONTEXT */ ,
             *(int*)args[4] /* INT16 */ ,
             *(int*)args[5] /* INT16 */ ,
             ((struct std2_buffer*)args[6])->data
        );
    *(void**)ret = (void*)c.sequence;
}
static void create_colormap(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_create_colormap(CONN(args[0]) ,
             *(int*)args[1] /* BYTE */ ,
             *(int*)args[2] /* COLORMAP */ ,
             *(int*)args[3] /* WINDOW */ ,
             *(int*)args[4] /* VISUALID */
        );
    *(void**)ret = (void*)c.sequence;
}
static void free_colormap(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_free_colormap(CONN(args[0]) ,
             *(int*)args[1] /* COLORMAP */
        );
    *(void**)ret = (void*)c.sequence;
}
static void copy_colormap_and_free(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_copy_colormap_and_free(CONN(args[0]) ,
             *(int*)args[1] /* COLORMAP */ ,
             *(int*)args[2] /* COLORMAP */
        );
    *(void**)ret = (void*)c.sequence;
}
static void install_colormap(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_install_colormap(CONN(args[0]) ,
             *(int*)args[1] /* COLORMAP */
        );
    *(void**)ret = (void*)c.sequence;
}
static void uninstall_colormap(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_uninstall_colormap(CONN(args[0]) ,
             *(int*)args[1] /* COLORMAP */
        );
    *(void**)ret = (void*)c.sequence;
}
static void list_installed_colormaps_get_cmaps(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_list_installed_colormaps_reply_t* s = args[0];
    int size = xcb_list_installed_colormaps_cmaps_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(int*)ret = xcb_list_installed_colormaps_cmaps(s)[i];
}
static void list_installed_colormaps_cmaps_length(void* ret, void* const* args) {
    xcb_list_installed_colormaps_reply_t* s = args[0];
    *(int*)ret = xcb_list_installed_colormaps_cmaps_length(s);
}
static void list_installed_colormaps(void* ret, void* const* args) {
    xcb_list_installed_colormaps_cookie_t c =
        xcb_list_installed_colormaps(CONN(args[0]) ,
             *(int*)args[1] /* WINDOW */
        );
    *(void**)ret = (void*)c.sequence;
}
static void alloc_color(void* ret, void* const* args) {
    xcb_alloc_color_cookie_t c =
        xcb_alloc_color(CONN(args[0]) ,
             *(int*)args[1] /* COLORMAP */ ,
             *(int*)args[2] /* CARD16 */ ,
             *(int*)args[3] /* CARD16 */ ,
             *(int*)args[4] /* CARD16 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void alloc_named_color(void* ret, void* const* args) {
    xcb_alloc_named_color_cookie_t c =
        xcb_alloc_named_color(CONN(args[0]) ,
             *(int*)args[1] /* COLORMAP */ ,
             *(int*)args[2] /* CARD16 */ ,
             ((struct std2_buffer*)args[3])->data
        );
    *(void**)ret = (void*)c.sequence;
}
static void alloc_color_cells_get_pixels(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_alloc_color_cells_reply_t* s = args[0];
    int size = xcb_alloc_color_cells_pixels_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(int*)ret = xcb_alloc_color_cells_pixels(s)[i];
}
static void alloc_color_cells_pixels_length(void* ret, void* const* args) {
    xcb_alloc_color_cells_reply_t* s = args[0];
    *(int*)ret = xcb_alloc_color_cells_pixels_length(s);
}
static void alloc_color_cells_get_masks(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_alloc_color_cells_reply_t* s = args[0];
    int size = xcb_alloc_color_cells_masks_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(int*)ret = xcb_alloc_color_cells_masks(s)[i];
}
static void alloc_color_cells_masks_length(void* ret, void* const* args) {
    xcb_alloc_color_cells_reply_t* s = args[0];
    *(int*)ret = xcb_alloc_color_cells_masks_length(s);
}
static void alloc_color_cells(void* ret, void* const* args) {
    xcb_alloc_color_cells_cookie_t c =
        xcb_alloc_color_cells(CONN(args[0]) ,
             *(int*)args[1] /* BOOL */ ,
             *(int*)args[2] /* COLORMAP */ ,
             *(int*)args[3] /* CARD16 */ ,
             *(int*)args[4] /* CARD16 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void alloc_color_planes_get_pixels(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_alloc_color_planes_reply_t* s = args[0];
    int size = xcb_alloc_color_planes_pixels_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(int*)ret = xcb_alloc_color_planes_pixels(s)[i];
}
static void alloc_color_planes_pixels_length(void* ret, void* const* args) {
    xcb_alloc_color_planes_reply_t* s = args[0];
    *(int*)ret = xcb_alloc_color_planes_pixels_length(s);
}
static void alloc_color_planes(void* ret, void* const* args) {
    xcb_alloc_color_planes_cookie_t c =
        xcb_alloc_color_planes(CONN(args[0]) ,
             *(int*)args[1] /* BOOL */ ,
             *(int*)args[2] /* COLORMAP */ ,
             *(int*)args[3] /* CARD16 */ ,
             *(int*)args[4] /* CARD16 */ ,
             *(int*)args[5] /* CARD16 */ ,
             *(int*)args[6] /* CARD16 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void coloritem_get_pixel(void* ret, void* const* args) {
    *(int*)ret = ((xcb_coloritem_t*)args[0])->pixel;
}
static void coloritem_set_pixel(void* ret, void* const* args) {
    (void)ret;
    ((xcb_coloritem_t*)args[0])->pixel = *(int*)args[1];
}
static void coloritem_get_red(void* ret, void* const* args) {
    *(int*)ret = ((xcb_coloritem_t*)args[0])->red;
}
static void coloritem_set_red(void* ret, void* const* args) {
    (void)ret;
    ((xcb_coloritem_t*)args[0])->red = *(int*)args[1];
}
static void coloritem_get_green(void* ret, void* const* args) {
    *(int*)ret = ((xcb_coloritem_t*)args[0])->green;
}
static void coloritem_set_green(void* ret, void* const* args) {
    (void)ret;
    ((xcb_coloritem_t*)args[0])->green = *(int*)args[1];
}
static void coloritem_get_blue(void* ret, void* const* args) {
    *(int*)ret = ((xcb_coloritem_t*)args[0])->blue;
}
static void coloritem_set_blue(void* ret, void* const* args) {
    (void)ret;
    ((xcb_coloritem_t*)args[0])->blue = *(int*)args[1];
}
static void coloritem_get_flags(void* ret, void* const* args) {
    *(int*)ret = ((xcb_coloritem_t*)args[0])->flags;
}
static void coloritem_set_flags(void* ret, void* const* args) {
    (void)ret;
    ((xcb_coloritem_t*)args[0])->flags = *(int*)args[1];
}
static void store_named_color(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_store_named_color(CONN(args[0]) ,
             *(int*)args[1] /* CARD8 */ ,
             *(int*)args[2] /* COLORMAP */ ,
             *(int*)args[3] /* CARD32 */ ,
             *(int*)args[4] /* CARD16 */ ,
             ((struct std2_buffer*)args[5])->data
        );
    *(void**)ret = (void*)c.sequence;
}
static void rgb_get_red(void* ret, void* const* args) {
    *(int*)ret = ((xcb_rgb_t*)args[0])->red;
}
static void rgb_set_red(void* ret, void* const* args) {
    (void)ret;
    ((xcb_rgb_t*)args[0])->red = *(int*)args[1];
}
static void rgb_get_green(void* ret, void* const* args) {
    *(int*)ret = ((xcb_rgb_t*)args[0])->green;
}
static void rgb_set_green(void* ret, void* const* args) {
    (void)ret;
    ((xcb_rgb_t*)args[0])->green = *(int*)args[1];
}
static void rgb_get_blue(void* ret, void* const* args) {
    *(int*)ret = ((xcb_rgb_t*)args[0])->blue;
}
static void rgb_set_blue(void* ret, void* const* args) {
    (void)ret;
    ((xcb_rgb_t*)args[0])->blue = *(int*)args[1];
}
static void query_colors_get_colors(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_query_colors_reply_t* s = args[0];
    int size = xcb_query_colors_colors_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct(&xcb_query_colors_colors_iterator(s).data[i]);
}
static void query_colors_colors_length(void* ret, void* const* args) {
    xcb_query_colors_reply_t* s = args[0];
    *(int*)ret = xcb_query_colors_colors_length(s);
}
static void lookup_color(void* ret, void* const* args) {
    xcb_lookup_color_cookie_t c =
        xcb_lookup_color(CONN(args[0]) ,
             *(int*)args[1] /* COLORMAP */ ,
             *(int*)args[2] /* CARD16 */ ,
             ((struct std2_buffer*)args[3])->data
        );
    *(void**)ret = (void*)c.sequence;
}
static void create_cursor(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_create_cursor(CONN(args[0]) ,
             *(int*)args[1] /* CURSOR */ ,
             *(int*)args[2] /* PIXMAP */ ,
             *(int*)args[3] /* PIXMAP */ ,
             *(int*)args[4] /* CARD16 */ ,
             *(int*)args[5] /* CARD16 */ ,
             *(int*)args[6] /* CARD16 */ ,
             *(int*)args[7] /* CARD16 */ ,
             *(int*)args[8] /* CARD16 */ ,
             *(int*)args[9] /* CARD16 */ ,
             *(int*)args[10] /* CARD16 */ ,
             *(int*)args[11] /* CARD16 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void create_glyph_cursor(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_create_glyph_cursor(CONN(args[0]) ,
             *(int*)args[1] /* CURSOR */ ,
             *(int*)args[2] /* FONT */ ,
             *(int*)args[3] /* FONT */ ,
             *(int*)args[4] /* CARD16 */ ,
             *(int*)args[5] /* CARD16 */ ,
             *(int*)args[6] /* CARD16 */ ,
             *(int*)args[7] /* CARD16 */ ,
             *(int*)args[8] /* CARD16 */ ,
             *(int*)args[9] /* CARD16 */ ,
             *(int*)args[10] /* CARD16 */ ,
             *(int*)args[11] /* CARD16 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void free_cursor(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_free_cursor(CONN(args[0]) ,
             *(int*)args[1] /* CURSOR */
        );
    *(void**)ret = (void*)c.sequence;
}
static void recolor_cursor(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_recolor_cursor(CONN(args[0]) ,
             *(int*)args[1] /* CURSOR */ ,
             *(int*)args[2] /* CARD16 */ ,
             *(int*)args[3] /* CARD16 */ ,
             *(int*)args[4] /* CARD16 */ ,
             *(int*)args[5] /* CARD16 */ ,
             *(int*)args[6] /* CARD16 */ ,
             *(int*)args[7] /* CARD16 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void query_best_size(void* ret, void* const* args) {
    xcb_query_best_size_cookie_t c =
        xcb_query_best_size(CONN(args[0]) ,
             *(int*)args[1] /* CARD8 */ ,
             *(int*)args[2] /* DRAWABLE */ ,
             *(int*)args[3] /* CARD16 */ ,
             *(int*)args[4] /* CARD16 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void query_extension(void* ret, void* const* args) {
    xcb_query_extension_cookie_t c =
        xcb_query_extension(CONN(args[0]) ,
             *(int*)args[1] /* CARD16 */ ,
             ((struct std2_buffer*)args[2])->data
        );
    *(void**)ret = (void*)c.sequence;
}
static void list_extensions_get_names(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_list_extensions_reply_t* s = args[0];
    int size = xcb_list_extensions_names_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct(&xcb_list_extensions_names_iterator(s).data[i]);
}
static void list_extensions_names_length(void* ret, void* const* args) {
    xcb_list_extensions_reply_t* s = args[0];
    *(int*)ret = xcb_list_extensions_names_length(s);
}
static void list_extensions(void* ret, void* const* args) {
    xcb_list_extensions_cookie_t c =
        xcb_list_extensions(CONN(args[0])
        );
    *(void**)ret = (void*)c.sequence;
}
static void get_keyboard_mapping_get_keysyms(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_get_keyboard_mapping_reply_t* s = args[0];
    int size = xcb_get_keyboard_mapping_keysyms_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(int*)ret = xcb_get_keyboard_mapping_keysyms(s)[i];
}
static void get_keyboard_mapping_keysyms_length(void* ret, void* const* args) {
    xcb_get_keyboard_mapping_reply_t* s = args[0];
    *(int*)ret = xcb_get_keyboard_mapping_keysyms_length(s);
}
static void get_keyboard_mapping(void* ret, void* const* args) {
    xcb_get_keyboard_mapping_cookie_t c =
        xcb_get_keyboard_mapping(CONN(args[0]) ,
             *(int*)args[1] /* KEYCODE */ ,
             *(int*)args[2] /* CARD8 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void change_keyboard_control(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_change_keyboard_control(CONN(args[0]) ,
             *(int*)args[1] /* INT32 */ ,
             (uint32_t*)args[2]
        );
    *(void**)ret = (void*)c.sequence;
}
static void get_keyboard_control_get_auto_repeats(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_get_keyboard_control_reply_t* s = args[0];
    int size = xcb_get_keyboard_control_auto_repeats_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(int*)ret = xcb_get_keyboard_control_auto_repeats(s)[i];
}
static void get_keyboard_control_auto_repeats_length(void* ret, void* const* args) {
    xcb_get_keyboard_control_reply_t* s = args[0];
    *(int*)ret = xcb_get_keyboard_control_auto_repeats_length(s);
}
static void get_keyboard_control(void* ret, void* const* args) {
    xcb_get_keyboard_control_cookie_t c =
        xcb_get_keyboard_control(CONN(args[0])
        );
    *(void**)ret = (void*)c.sequence;
}
static void bell(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_bell(CONN(args[0]) ,
             *(int*)args[1] /* INT8 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void change_pointer_control(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_change_pointer_control(CONN(args[0]) ,
             *(int*)args[1] /* INT16 */ ,
             *(int*)args[2] /* INT16 */ ,
             *(int*)args[3] /* INT16 */ ,
             *(int*)args[4] /* BOOL */ ,
             *(int*)args[5] /* BOOL */
        );
    *(void**)ret = (void*)c.sequence;
}
static void get_pointer_control(void* ret, void* const* args) {
    xcb_get_pointer_control_cookie_t c =
        xcb_get_pointer_control(CONN(args[0])
        );
    *(void**)ret = (void*)c.sequence;
}
static void set_screen_saver(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_set_screen_saver(CONN(args[0]) ,
             *(int*)args[1] /* INT16 */ ,
             *(int*)args[2] /* INT16 */ ,
             *(int*)args[3] /* CARD8 */ ,
             *(int*)args[4] /* CARD8 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void get_screen_saver(void* ret, void* const* args) {
    xcb_get_screen_saver_cookie_t c =
        xcb_get_screen_saver(CONN(args[0])
        );
    *(void**)ret = (void*)c.sequence;
}
static void change_hosts(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_change_hosts(CONN(args[0]) ,
             *(int*)args[1] /* CARD8 */ ,
             *(int*)args[2] /* CARD8 */ ,
             *(int*)args[3] /* CARD16 */ ,
             ((struct std2_buffer*)args[4])->data
        );
    *(void**)ret = (void*)c.sequence;
}
static void host_get_family(void* ret, void* const* args) {
    *(int*)ret = ((xcb_host_t*)args[0])->family;
}
static void host_set_family(void* ret, void* const* args) {
    (void)ret;
    ((xcb_host_t*)args[0])->family = *(int*)args[1];
}
static void host_get_address_len(void* ret, void* const* args) {
    *(int*)ret = ((xcb_host_t*)args[0])->address_len;
}
static void host_set_address_len(void* ret, void* const* args) {
    (void)ret;
    ((xcb_host_t*)args[0])->address_len = *(int*)args[1];
}
static void host_get_address(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_host_t* s = args[0];
    int size = xcb_host_address_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(int*)ret = xcb_host_address(s)[i];
}
static void host_address_length(void* ret, void* const* args) {
    xcb_host_t* s = args[0];
    *(int*)ret = xcb_host_address_length(s);
}
static void list_hosts_get_hosts(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_list_hosts_reply_t* s = args[0];
    int size = xcb_list_hosts_hosts_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(void**)ret = copy_struct(&xcb_list_hosts_hosts_iterator(s).data[i]);
}
static void list_hosts_hosts_length(void* ret, void* const* args) {
    xcb_list_hosts_reply_t* s = args[0];
    *(int*)ret = xcb_list_hosts_hosts_length(s);
}
static void list_hosts(void* ret, void* const* args) {
    xcb_list_hosts_cookie_t c =
        xcb_list_hosts(CONN(args[0])
        );
    *(void**)ret = (void*)c.sequence;
}
static void set_access_control(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_set_access_control(CONN(args[0]) ,
             *(int*)args[1] /* CARD8 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void set_close_down_mode(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_set_close_down_mode(CONN(args[0]) ,
             *(int*)args[1] /* CARD8 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void kill_client(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_kill_client(CONN(args[0]) ,
             *(int*)args[1] /* CARD32 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void force_screen_saver(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_force_screen_saver(CONN(args[0]) ,
             *(int*)args[1] /* CARD8 */
        );
    *(void**)ret = (void*)c.sequence;
}
static void get_pointer_mapping_get_map(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_get_pointer_mapping_reply_t* s = args[0];
    int size = xcb_get_pointer_mapping_map_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(int*)ret = xcb_get_pointer_mapping_map(s)[i];
}
static void get_pointer_mapping_map_length(void* ret, void* const* args) {
    xcb_get_pointer_mapping_reply_t* s = args[0];
    *(int*)ret = xcb_get_pointer_mapping_map_length(s);
}
static void get_pointer_mapping(void* ret, void* const* args) {
    xcb_get_pointer_mapping_cookie_t c =
        xcb_get_pointer_mapping(CONN(args[0])
        );
    *(void**)ret = (void*)c.sequence;
}
static void get_modifier_mapping_get_keycodes(void* ret, void* const* args) {
    int i = *(int*)args[1];
    xcb_get_modifier_mapping_reply_t* s = args[0];
    int size = xcb_get_modifier_mapping_keycodes_length(s);
    if (i < 0 || i >= size) {
        *(void**)ret = 0;
        return;
    }
    *(int*)ret = xcb_get_modifier_mapping_keycodes(s)[i];
}
static void get_modifier_mapping_keycodes_length(void* ret, void* const* args) {
    xcb_get_modifier_mapping_reply_t* s = args[0];
    *(int*)ret = xcb_get_modifier_mapping_keycodes_length(s);
}
static void get_modifier_mapping(void* ret, void* const* args) {
    xcb_get_modifier_mapping_cookie_t c =
        xcb_get_modifier_mapping(CONN(args[0])
        );
    *(void**)ret = (void*)c.sequence;
}
static void no_operation(void* ret, void* const* args) {
    xcb_void_cookie_t c =
        xcb_no_operation(CONN(args[0])
        );
    *(void**)ret = (void*)c.sequence;
}
#define XCB_CLASSES \
STD2_CLASS("char2b", free) \
STD2_CLASS("point", free) \
STD2_CLASS("rectangle", free) \
STD2_CLASS("arc", free) \
STD2_CLASS("format", free) \
STD2_CLASS("visualtype", free) \
STD2_CLASS("depth", free) \
STD2_CLASS("screen", free) \
STD2_CLASS("setup_request", free) \
STD2_CLASS("setup_failed", free) \
STD2_CLASS("setup_authenticate", free) \
STD2_CLASS("setup", free_setup) \
STD2_CLASS("key_press_event", free) \
STD2_CLASS("button_press_event", free) \
STD2_CLASS("motion_notify_event", free) \
STD2_CLASS("enter_notify_event", free) \
STD2_CLASS("focus_in_event", free) \
STD2_CLASS("keymap_notify_event", free) \
STD2_CLASS("expose_event", free) \
STD2_CLASS("graphics_exposure_event", free) \
STD2_CLASS("no_exposure_event", free) \
STD2_CLASS("visibility_notify_event", free) \
STD2_CLASS("create_notify_event", free) \
STD2_CLASS("destroy_notify_event", free) \
STD2_CLASS("unmap_notify_event", free) \
STD2_CLASS("map_notify_event", free) \
STD2_CLASS("map_request_event", free) \
STD2_CLASS("reparent_notify_event", free) \
STD2_CLASS("configure_notify_event", free) \
STD2_CLASS("configure_request_event", free) \
STD2_CLASS("gravity_notify_event", free) \
STD2_CLASS("resize_request_event", free) \
STD2_CLASS("circulate_notify_event", free) \
STD2_CLASS("property_notify_event", free) \
STD2_CLASS("selection_clear_event", free) \
STD2_CLASS("selection_request_event", free) \
STD2_CLASS("selection_notify_event", free) \
STD2_CLASS("colormap_notify_event", free) \
STD2_CLASS("client_message_event", free) \
STD2_CLASS("mapping_notify_event", free) \
STD2_CLASS("void_cookie", 0) \
STD2_CLASS("get_window_attributes_cookie", 0) \
STD2_CLASS("get_geometry_cookie", 0) \
STD2_CLASS("query_tree_cookie", 0) \
STD2_CLASS("intern_atom_cookie", 0) \
STD2_CLASS("get_atom_name_cookie", 0) \
STD2_CLASS("get_property_cookie", 0) \
STD2_CLASS("list_properties_cookie", 0) \
STD2_CLASS("get_selection_owner_cookie", 0) \
STD2_CLASS("grab_pointer_cookie", 0) \
STD2_CLASS("grab_keyboard_cookie", 0) \
STD2_CLASS("query_pointer_cookie", 0) \
STD2_CLASS("timecoord", free) \
STD2_CLASS("get_motion_events_cookie", 0) \
STD2_CLASS("translate_coordinates_cookie", 0) \
STD2_CLASS("get_input_focus_cookie", 0) \
STD2_CLASS("query_keymap_cookie", 0) \
STD2_CLASS("fontprop", free) \
STD2_CLASS("charinfo", free) \
STD2_CLASS("query_font_cookie", 0) \
STD2_CLASS("str", free) \
STD2_CLASS("list_fonts_cookie", 0) \
STD2_CLASS("list_fonts_with_info_cookie", 0) \
STD2_CLASS("get_font_path_cookie", 0) \
STD2_CLASS("segment", free) \
STD2_CLASS("get_image_cookie", 0) \
STD2_CLASS("list_installed_colormaps_cookie", 0) \
STD2_CLASS("alloc_color_cookie", 0) \
STD2_CLASS("alloc_named_color_cookie", 0) \
STD2_CLASS("alloc_color_cells_cookie", 0) \
STD2_CLASS("alloc_color_planes_cookie", 0) \
STD2_CLASS("coloritem", free) \
STD2_CLASS("rgb", free) \
STD2_CLASS("lookup_color_cookie", 0) \
STD2_CLASS("query_best_size_cookie", 0) \
STD2_CLASS("query_extension_cookie", 0) \
STD2_CLASS("list_extensions_cookie", 0) \
STD2_CLASS("get_keyboard_mapping_cookie", 0) \
STD2_CLASS("get_keyboard_control_cookie", 0) \
STD2_CLASS("get_pointer_control_cookie", 0) \
STD2_CLASS("get_screen_saver_cookie", 0) \
STD2_CLASS("host", free) \
STD2_CLASS("list_hosts_cookie", 0) \
STD2_CLASS("get_pointer_mapping_cookie", 0) \
STD2_CLASS("get_modifier_mapping_cookie", 0) \

#define XCB_FUNCS \
STD2_FUNC("char2b_get_byte1", "i", "char2b", char2b_get_byte1) \
STD2_FUNC("char2b_set_byte1", "", "char2b i", char2b_set_byte1) \
STD2_FUNC("char2b_get_byte2", "i", "char2b", char2b_get_byte2) \
STD2_FUNC("char2b_set_byte2", "", "char2b i", char2b_set_byte2) \
STD2_FUNC("point_get_x", "i", "point", point_get_x) \
STD2_FUNC("point_set_x", "", "point i", point_set_x) \
STD2_FUNC("point_get_y", "i", "point", point_get_y) \
STD2_FUNC("point_set_y", "", "point i", point_set_y) \
STD2_FUNC("rectangle_get_x", "i", "rectangle", rectangle_get_x) \
STD2_FUNC("rectangle_set_x", "", "rectangle i", rectangle_set_x) \
STD2_FUNC("rectangle_get_y", "i", "rectangle", rectangle_get_y) \
STD2_FUNC("rectangle_set_y", "", "rectangle i", rectangle_set_y) \
STD2_FUNC("rectangle_get_width", "i", "rectangle", rectangle_get_width) \
STD2_FUNC("rectangle_set_width", "", "rectangle i", rectangle_set_width) \
STD2_FUNC("rectangle_get_height", "i", "rectangle", rectangle_get_height) \
STD2_FUNC("rectangle_set_height", "", "rectangle i", rectangle_set_height) \
STD2_FUNC("arc_get_x", "i", "arc", arc_get_x) \
STD2_FUNC("arc_set_x", "", "arc i", arc_set_x) \
STD2_FUNC("arc_get_y", "i", "arc", arc_get_y) \
STD2_FUNC("arc_set_y", "", "arc i", arc_set_y) \
STD2_FUNC("arc_get_width", "i", "arc", arc_get_width) \
STD2_FUNC("arc_set_width", "", "arc i", arc_set_width) \
STD2_FUNC("arc_get_height", "i", "arc", arc_get_height) \
STD2_FUNC("arc_set_height", "", "arc i", arc_set_height) \
STD2_FUNC("arc_get_angle1", "i", "arc", arc_get_angle1) \
STD2_FUNC("arc_set_angle1", "", "arc i", arc_set_angle1) \
STD2_FUNC("arc_get_angle2", "i", "arc", arc_get_angle2) \
STD2_FUNC("arc_set_angle2", "", "arc i", arc_set_angle2) \
STD2_FUNC("format_get_depth", "i", "format", format_get_depth) \
STD2_FUNC("format_set_depth", "", "format i", format_set_depth) \
STD2_FUNC("format_get_bits_per_pixel", "i", "format", format_get_bits_per_pixel) \
STD2_FUNC("format_set_bits_per_pixel", "", "format i", format_set_bits_per_pixel) \
STD2_FUNC("format_get_scanline_pad", "i", "format", format_get_scanline_pad) \
STD2_FUNC("format_set_scanline_pad", "", "format i", format_set_scanline_pad) \
STD2_FUNC("visualtype_get_visual_id", "i", "visualtype", visualtype_get_visual_id) \
STD2_FUNC("visualtype_set_visual_id", "", "visualtype i", visualtype_set_visual_id) \
STD2_FUNC("visualtype_get_class", "i", "visualtype", visualtype_get_class) \
STD2_FUNC("visualtype_set_class", "", "visualtype i", visualtype_set_class) \
STD2_FUNC("visualtype_get_bits_per_rgb_value", "i", "visualtype", visualtype_get_bits_per_rgb_value) \
STD2_FUNC("visualtype_set_bits_per_rgb_value", "", "visualtype i", visualtype_set_bits_per_rgb_value) \
STD2_FUNC("visualtype_get_colormap_entries", "i", "visualtype", visualtype_get_colormap_entries) \
STD2_FUNC("visualtype_set_colormap_entries", "", "visualtype i", visualtype_set_colormap_entries) \
STD2_FUNC("visualtype_get_red_mask", "i", "visualtype", visualtype_get_red_mask) \
STD2_FUNC("visualtype_set_red_mask", "", "visualtype i", visualtype_set_red_mask) \
STD2_FUNC("visualtype_get_green_mask", "i", "visualtype", visualtype_get_green_mask) \
STD2_FUNC("visualtype_set_green_mask", "", "visualtype i", visualtype_set_green_mask) \
STD2_FUNC("visualtype_get_blue_mask", "i", "visualtype", visualtype_get_blue_mask) \
STD2_FUNC("visualtype_set_blue_mask", "", "visualtype i", visualtype_set_blue_mask) \
STD2_FUNC("depth_get_depth", "i", "depth", depth_get_depth) \
STD2_FUNC("depth_set_depth", "", "depth i", depth_set_depth) \
STD2_FUNC("depth_get_visuals_len", "i", "depth", depth_get_visuals_len) \
STD2_FUNC("depth_set_visuals_len", "", "depth i", depth_set_visuals_len) \
STD2_FUNC("depth_get_visuals", "visualtype", "depth i", depth_get_visuals) \
STD2_FUNC("depth_visuals_length", "i", "depth", depth_visuals_length) \
STD2_FUNC("screen_get_root", "i", "screen", screen_get_root) \
STD2_FUNC("screen_set_root", "", "screen i", screen_set_root) \
STD2_FUNC("screen_get_default_colormap", "i", "screen", screen_get_default_colormap) \
STD2_FUNC("screen_set_default_colormap", "", "screen i", screen_set_default_colormap) \
STD2_FUNC("screen_get_white_pixel", "i", "screen", screen_get_white_pixel) \
STD2_FUNC("screen_set_white_pixel", "", "screen i", screen_set_white_pixel) \
STD2_FUNC("screen_get_black_pixel", "i", "screen", screen_get_black_pixel) \
STD2_FUNC("screen_set_black_pixel", "", "screen i", screen_set_black_pixel) \
STD2_FUNC("screen_get_current_input_masks", "i", "screen", screen_get_current_input_masks) \
STD2_FUNC("screen_set_current_input_masks", "", "screen i", screen_set_current_input_masks) \
STD2_FUNC("screen_get_width_in_pixels", "i", "screen", screen_get_width_in_pixels) \
STD2_FUNC("screen_set_width_in_pixels", "", "screen i", screen_set_width_in_pixels) \
STD2_FUNC("screen_get_height_in_pixels", "i", "screen", screen_get_height_in_pixels) \
STD2_FUNC("screen_set_height_in_pixels", "", "screen i", screen_set_height_in_pixels) \
STD2_FUNC("screen_get_width_in_millimeters", "i", "screen", screen_get_width_in_millimeters) \
STD2_FUNC("screen_set_width_in_millimeters", "", "screen i", screen_set_width_in_millimeters) \
STD2_FUNC("screen_get_height_in_millimeters", "i", "screen", screen_get_height_in_millimeters) \
STD2_FUNC("screen_set_height_in_millimeters", "", "screen i", screen_set_height_in_millimeters) \
STD2_FUNC("screen_get_min_installed_maps", "i", "screen", screen_get_min_installed_maps) \
STD2_FUNC("screen_set_min_installed_maps", "", "screen i", screen_set_min_installed_maps) \
STD2_FUNC("screen_get_max_installed_maps", "i", "screen", screen_get_max_installed_maps) \
STD2_FUNC("screen_set_max_installed_maps", "", "screen i", screen_set_max_installed_maps) \
STD2_FUNC("screen_get_root_visual", "i", "screen", screen_get_root_visual) \
STD2_FUNC("screen_set_root_visual", "", "screen i", screen_set_root_visual) \
STD2_FUNC("screen_get_backing_stores", "i", "screen", screen_get_backing_stores) \
STD2_FUNC("screen_set_backing_stores", "", "screen i", screen_set_backing_stores) \
STD2_FUNC("screen_get_save_unders", "i", "screen", screen_get_save_unders) \
STD2_FUNC("screen_set_save_unders", "", "screen i", screen_set_save_unders) \
STD2_FUNC("screen_get_root_depth", "i", "screen", screen_get_root_depth) \
STD2_FUNC("screen_set_root_depth", "", "screen i", screen_set_root_depth) \
STD2_FUNC("screen_get_allowed_depths_len", "i", "screen", screen_get_allowed_depths_len) \
STD2_FUNC("screen_set_allowed_depths_len", "", "screen i", screen_set_allowed_depths_len) \
STD2_FUNC("screen_get_allowed_depths", "depth", "screen i", screen_get_allowed_depths) \
STD2_FUNC("screen_allowed_depths_length", "i", "screen", screen_allowed_depths_length) \
STD2_FUNC("setup_request_get_byte_order", "i", "setup_request", setup_request_get_byte_order) \
STD2_FUNC("setup_request_set_byte_order", "", "setup_request i", setup_request_set_byte_order) \
STD2_FUNC("setup_request_get_protocol_major_version", "i", "setup_request", setup_request_get_protocol_major_version) \
STD2_FUNC("setup_request_set_protocol_major_version", "", "setup_request i", setup_request_set_protocol_major_version) \
STD2_FUNC("setup_request_get_protocol_minor_version", "i", "setup_request", setup_request_get_protocol_minor_version) \
STD2_FUNC("setup_request_set_protocol_minor_version", "", "setup_request i", setup_request_set_protocol_minor_version) \
STD2_FUNC("setup_request_get_authorization_protocol_name_len", "i", "setup_request", setup_request_get_authorization_protocol_name_len) \
STD2_FUNC("setup_request_set_authorization_protocol_name_len", "", "setup_request i", setup_request_set_authorization_protocol_name_len) \
STD2_FUNC("setup_request_get_authorization_protocol_data_len", "i", "setup_request", setup_request_get_authorization_protocol_data_len) \
STD2_FUNC("setup_request_set_authorization_protocol_data_len", "", "setup_request i", setup_request_set_authorization_protocol_data_len) \
STD2_FUNC("setup_request_get_authorization_protocol_name", "ms", "setup_request i", setup_request_get_authorization_protocol_name) \
STD2_FUNC("setup_request_authorization_protocol_name_length", "i", "setup_request", setup_request_authorization_protocol_name_length) \
STD2_FUNC("setup_request_get_authorization_protocol_data", "ms", "setup_request i", setup_request_get_authorization_protocol_data) \
STD2_FUNC("setup_request_authorization_protocol_data_length", "i", "setup_request", setup_request_authorization_protocol_data_length) \
STD2_FUNC("setup_failed_get_status", "i", "setup_failed", setup_failed_get_status) \
STD2_FUNC("setup_failed_set_status", "", "setup_failed i", setup_failed_set_status) \
STD2_FUNC("setup_failed_get_reason_len", "i", "setup_failed", setup_failed_get_reason_len) \
STD2_FUNC("setup_failed_set_reason_len", "", "setup_failed i", setup_failed_set_reason_len) \
STD2_FUNC("setup_failed_get_protocol_major_version", "i", "setup_failed", setup_failed_get_protocol_major_version) \
STD2_FUNC("setup_failed_set_protocol_major_version", "", "setup_failed i", setup_failed_set_protocol_major_version) \
STD2_FUNC("setup_failed_get_protocol_minor_version", "i", "setup_failed", setup_failed_get_protocol_minor_version) \
STD2_FUNC("setup_failed_set_protocol_minor_version", "", "setup_failed i", setup_failed_set_protocol_minor_version) \
STD2_FUNC("setup_failed_get_length", "i", "setup_failed", setup_failed_get_length) \
STD2_FUNC("setup_failed_set_length", "", "setup_failed i", setup_failed_set_length) \
STD2_FUNC("setup_failed_get_reason", "ms", "setup_failed i", setup_failed_get_reason) \
STD2_FUNC("setup_failed_reason_length", "i", "setup_failed", setup_failed_reason_length) \
STD2_FUNC("setup_authenticate_get_status", "i", "setup_authenticate", setup_authenticate_get_status) \
STD2_FUNC("setup_authenticate_set_status", "", "setup_authenticate i", setup_authenticate_set_status) \
STD2_FUNC("setup_authenticate_get_length", "i", "setup_authenticate", setup_authenticate_get_length) \
STD2_FUNC("setup_authenticate_set_length", "", "setup_authenticate i", setup_authenticate_set_length) \
STD2_FUNC("setup_authenticate_get_reason", "ms", "setup_authenticate i", setup_authenticate_get_reason) \
STD2_FUNC("setup_authenticate_reason_length", "i", "setup_authenticate", setup_authenticate_reason_length) \
STD2_FUNC("setup_get_status", "i", "setup", setup_get_status) \
STD2_FUNC("setup_set_status", "", "setup i", setup_set_status) \
STD2_FUNC("setup_get_protocol_major_version", "i", "setup", setup_get_protocol_major_version) \
STD2_FUNC("setup_set_protocol_major_version", "", "setup i", setup_set_protocol_major_version) \
STD2_FUNC("setup_get_protocol_minor_version", "i", "setup", setup_get_protocol_minor_version) \
STD2_FUNC("setup_set_protocol_minor_version", "", "setup i", setup_set_protocol_minor_version) \
STD2_FUNC("setup_get_length", "i", "setup", setup_get_length) \
STD2_FUNC("setup_set_length", "", "setup i", setup_set_length) \
STD2_FUNC("setup_get_release_number", "i", "setup", setup_get_release_number) \
STD2_FUNC("setup_set_release_number", "", "setup i", setup_set_release_number) \
STD2_FUNC("setup_get_resource_id_base", "i", "setup", setup_get_resource_id_base) \
STD2_FUNC("setup_set_resource_id_base", "", "setup i", setup_set_resource_id_base) \
STD2_FUNC("setup_get_resource_id_mask", "i", "setup", setup_get_resource_id_mask) \
STD2_FUNC("setup_set_resource_id_mask", "", "setup i", setup_set_resource_id_mask) \
STD2_FUNC("setup_get_motion_buffer_size", "i", "setup", setup_get_motion_buffer_size) \
STD2_FUNC("setup_set_motion_buffer_size", "", "setup i", setup_set_motion_buffer_size) \
STD2_FUNC("setup_get_vendor_len", "i", "setup", setup_get_vendor_len) \
STD2_FUNC("setup_set_vendor_len", "", "setup i", setup_set_vendor_len) \
STD2_FUNC("setup_get_maximum_request_length", "i", "setup", setup_get_maximum_request_length) \
STD2_FUNC("setup_set_maximum_request_length", "", "setup i", setup_set_maximum_request_length) \
STD2_FUNC("setup_get_roots_len", "i", "setup", setup_get_roots_len) \
STD2_FUNC("setup_set_roots_len", "", "setup i", setup_set_roots_len) \
STD2_FUNC("setup_get_pixmap_formats_len", "i", "setup", setup_get_pixmap_formats_len) \
STD2_FUNC("setup_set_pixmap_formats_len", "", "setup i", setup_set_pixmap_formats_len) \
STD2_FUNC("setup_get_image_byte_order", "i", "setup", setup_get_image_byte_order) \
STD2_FUNC("setup_set_image_byte_order", "", "setup i", setup_set_image_byte_order) \
STD2_FUNC("setup_get_bitmap_format_bit_order", "i", "setup", setup_get_bitmap_format_bit_order) \
STD2_FUNC("setup_set_bitmap_format_bit_order", "", "setup i", setup_set_bitmap_format_bit_order) \
STD2_FUNC("setup_get_bitmap_format_scanline_unit", "i", "setup", setup_get_bitmap_format_scanline_unit) \
STD2_FUNC("setup_set_bitmap_format_scanline_unit", "", "setup i", setup_set_bitmap_format_scanline_unit) \
STD2_FUNC("setup_get_bitmap_format_scanline_pad", "i", "setup", setup_get_bitmap_format_scanline_pad) \
STD2_FUNC("setup_set_bitmap_format_scanline_pad", "", "setup i", setup_set_bitmap_format_scanline_pad) \
STD2_FUNC("setup_get_min_keycode", "i", "setup", setup_get_min_keycode) \
STD2_FUNC("setup_set_min_keycode", "", "setup i", setup_set_min_keycode) \
STD2_FUNC("setup_get_max_keycode", "i", "setup", setup_get_max_keycode) \
STD2_FUNC("setup_set_max_keycode", "", "setup i", setup_set_max_keycode) \
STD2_FUNC("setup_get_vendor", "ms", "setup i", setup_get_vendor) \
STD2_FUNC("setup_vendor_length", "i", "setup", setup_vendor_length) \
STD2_FUNC("setup_get_pixmap_formats", "format", "setup i", setup_get_pixmap_formats) \
STD2_FUNC("setup_pixmap_formats_length", "i", "setup", setup_pixmap_formats_length) \
STD2_FUNC("setup_get_roots", "screen", "setup i", setup_get_roots) \
STD2_FUNC("setup_roots_length", "i", "setup", setup_roots_length) \
STD2_FUNC("key_press_event_get_detail", "i", "key_press_event", key_press_event_get_detail) \
STD2_FUNC("key_press_event_set_detail", "", "key_press_event i", key_press_event_set_detail) \
STD2_FUNC("key_press_event_get_time", "i", "key_press_event", key_press_event_get_time) \
STD2_FUNC("key_press_event_set_time", "", "key_press_event i", key_press_event_set_time) \
STD2_FUNC("key_press_event_get_root", "i", "key_press_event", key_press_event_get_root) \
STD2_FUNC("key_press_event_set_root", "", "key_press_event i", key_press_event_set_root) \
STD2_FUNC("key_press_event_get_event", "i", "key_press_event", key_press_event_get_event) \
STD2_FUNC("key_press_event_set_event", "", "key_press_event i", key_press_event_set_event) \
STD2_FUNC("key_press_event_get_child", "i", "key_press_event", key_press_event_get_child) \
STD2_FUNC("key_press_event_set_child", "", "key_press_event i", key_press_event_set_child) \
STD2_FUNC("key_press_event_get_root_x", "i", "key_press_event", key_press_event_get_root_x) \
STD2_FUNC("key_press_event_set_root_x", "", "key_press_event i", key_press_event_set_root_x) \
STD2_FUNC("key_press_event_get_root_y", "i", "key_press_event", key_press_event_get_root_y) \
STD2_FUNC("key_press_event_set_root_y", "", "key_press_event i", key_press_event_set_root_y) \
STD2_FUNC("key_press_event_get_event_x", "i", "key_press_event", key_press_event_get_event_x) \
STD2_FUNC("key_press_event_set_event_x", "", "key_press_event i", key_press_event_set_event_x) \
STD2_FUNC("key_press_event_get_event_y", "i", "key_press_event", key_press_event_get_event_y) \
STD2_FUNC("key_press_event_set_event_y", "", "key_press_event i", key_press_event_set_event_y) \
STD2_FUNC("key_press_event_get_state", "i", "key_press_event", key_press_event_get_state) \
STD2_FUNC("key_press_event_set_state", "", "key_press_event i", key_press_event_set_state) \
STD2_FUNC("key_press_event_get_same_screen", "i", "key_press_event", key_press_event_get_same_screen) \
STD2_FUNC("key_press_event_set_same_screen", "", "key_press_event i", key_press_event_set_same_screen) \
STD2_FUNC("to_key_press_event", "key_press_event", "generic_event", to_key_press_event) \
STD2_FUNC("button_press_event_get_detail", "i", "button_press_event", button_press_event_get_detail) \
STD2_FUNC("button_press_event_set_detail", "", "button_press_event i", button_press_event_set_detail) \
STD2_FUNC("button_press_event_get_time", "i", "button_press_event", button_press_event_get_time) \
STD2_FUNC("button_press_event_set_time", "", "button_press_event i", button_press_event_set_time) \
STD2_FUNC("button_press_event_get_root", "i", "button_press_event", button_press_event_get_root) \
STD2_FUNC("button_press_event_set_root", "", "button_press_event i", button_press_event_set_root) \
STD2_FUNC("button_press_event_get_event", "i", "button_press_event", button_press_event_get_event) \
STD2_FUNC("button_press_event_set_event", "", "button_press_event i", button_press_event_set_event) \
STD2_FUNC("button_press_event_get_child", "i", "button_press_event", button_press_event_get_child) \
STD2_FUNC("button_press_event_set_child", "", "button_press_event i", button_press_event_set_child) \
STD2_FUNC("button_press_event_get_root_x", "i", "button_press_event", button_press_event_get_root_x) \
STD2_FUNC("button_press_event_set_root_x", "", "button_press_event i", button_press_event_set_root_x) \
STD2_FUNC("button_press_event_get_root_y", "i", "button_press_event", button_press_event_get_root_y) \
STD2_FUNC("button_press_event_set_root_y", "", "button_press_event i", button_press_event_set_root_y) \
STD2_FUNC("button_press_event_get_event_x", "i", "button_press_event", button_press_event_get_event_x) \
STD2_FUNC("button_press_event_set_event_x", "", "button_press_event i", button_press_event_set_event_x) \
STD2_FUNC("button_press_event_get_event_y", "i", "button_press_event", button_press_event_get_event_y) \
STD2_FUNC("button_press_event_set_event_y", "", "button_press_event i", button_press_event_set_event_y) \
STD2_FUNC("button_press_event_get_state", "i", "button_press_event", button_press_event_get_state) \
STD2_FUNC("button_press_event_set_state", "", "button_press_event i", button_press_event_set_state) \
STD2_FUNC("button_press_event_get_same_screen", "i", "button_press_event", button_press_event_get_same_screen) \
STD2_FUNC("button_press_event_set_same_screen", "", "button_press_event i", button_press_event_set_same_screen) \
STD2_FUNC("to_button_press_event", "button_press_event", "generic_event", to_button_press_event) \
STD2_FUNC("motion_notify_event_get_detail", "i", "motion_notify_event", motion_notify_event_get_detail) \
STD2_FUNC("motion_notify_event_set_detail", "", "motion_notify_event i", motion_notify_event_set_detail) \
STD2_FUNC("motion_notify_event_get_time", "i", "motion_notify_event", motion_notify_event_get_time) \
STD2_FUNC("motion_notify_event_set_time", "", "motion_notify_event i", motion_notify_event_set_time) \
STD2_FUNC("motion_notify_event_get_root", "i", "motion_notify_event", motion_notify_event_get_root) \
STD2_FUNC("motion_notify_event_set_root", "", "motion_notify_event i", motion_notify_event_set_root) \
STD2_FUNC("motion_notify_event_get_event", "i", "motion_notify_event", motion_notify_event_get_event) \
STD2_FUNC("motion_notify_event_set_event", "", "motion_notify_event i", motion_notify_event_set_event) \
STD2_FUNC("motion_notify_event_get_child", "i", "motion_notify_event", motion_notify_event_get_child) \
STD2_FUNC("motion_notify_event_set_child", "", "motion_notify_event i", motion_notify_event_set_child) \
STD2_FUNC("motion_notify_event_get_root_x", "i", "motion_notify_event", motion_notify_event_get_root_x) \
STD2_FUNC("motion_notify_event_set_root_x", "", "motion_notify_event i", motion_notify_event_set_root_x) \
STD2_FUNC("motion_notify_event_get_root_y", "i", "motion_notify_event", motion_notify_event_get_root_y) \
STD2_FUNC("motion_notify_event_set_root_y", "", "motion_notify_event i", motion_notify_event_set_root_y) \
STD2_FUNC("motion_notify_event_get_event_x", "i", "motion_notify_event", motion_notify_event_get_event_x) \
STD2_FUNC("motion_notify_event_set_event_x", "", "motion_notify_event i", motion_notify_event_set_event_x) \
STD2_FUNC("motion_notify_event_get_event_y", "i", "motion_notify_event", motion_notify_event_get_event_y) \
STD2_FUNC("motion_notify_event_set_event_y", "", "motion_notify_event i", motion_notify_event_set_event_y) \
STD2_FUNC("motion_notify_event_get_state", "i", "motion_notify_event", motion_notify_event_get_state) \
STD2_FUNC("motion_notify_event_set_state", "", "motion_notify_event i", motion_notify_event_set_state) \
STD2_FUNC("motion_notify_event_get_same_screen", "i", "motion_notify_event", motion_notify_event_get_same_screen) \
STD2_FUNC("motion_notify_event_set_same_screen", "", "motion_notify_event i", motion_notify_event_set_same_screen) \
STD2_FUNC("to_motion_notify_event", "motion_notify_event", "generic_event", to_motion_notify_event) \
STD2_FUNC("enter_notify_event_get_detail", "i", "enter_notify_event", enter_notify_event_get_detail) \
STD2_FUNC("enter_notify_event_set_detail", "", "enter_notify_event i", enter_notify_event_set_detail) \
STD2_FUNC("enter_notify_event_get_time", "i", "enter_notify_event", enter_notify_event_get_time) \
STD2_FUNC("enter_notify_event_set_time", "", "enter_notify_event i", enter_notify_event_set_time) \
STD2_FUNC("enter_notify_event_get_root", "i", "enter_notify_event", enter_notify_event_get_root) \
STD2_FUNC("enter_notify_event_set_root", "", "enter_notify_event i", enter_notify_event_set_root) \
STD2_FUNC("enter_notify_event_get_event", "i", "enter_notify_event", enter_notify_event_get_event) \
STD2_FUNC("enter_notify_event_set_event", "", "enter_notify_event i", enter_notify_event_set_event) \
STD2_FUNC("enter_notify_event_get_child", "i", "enter_notify_event", enter_notify_event_get_child) \
STD2_FUNC("enter_notify_event_set_child", "", "enter_notify_event i", enter_notify_event_set_child) \
STD2_FUNC("enter_notify_event_get_root_x", "i", "enter_notify_event", enter_notify_event_get_root_x) \
STD2_FUNC("enter_notify_event_set_root_x", "", "enter_notify_event i", enter_notify_event_set_root_x) \
STD2_FUNC("enter_notify_event_get_root_y", "i", "enter_notify_event", enter_notify_event_get_root_y) \
STD2_FUNC("enter_notify_event_set_root_y", "", "enter_notify_event i", enter_notify_event_set_root_y) \
STD2_FUNC("enter_notify_event_get_event_x", "i", "enter_notify_event", enter_notify_event_get_event_x) \
STD2_FUNC("enter_notify_event_set_event_x", "", "enter_notify_event i", enter_notify_event_set_event_x) \
STD2_FUNC("enter_notify_event_get_event_y", "i", "enter_notify_event", enter_notify_event_get_event_y) \
STD2_FUNC("enter_notify_event_set_event_y", "", "enter_notify_event i", enter_notify_event_set_event_y) \
STD2_FUNC("enter_notify_event_get_state", "i", "enter_notify_event", enter_notify_event_get_state) \
STD2_FUNC("enter_notify_event_set_state", "", "enter_notify_event i", enter_notify_event_set_state) \
STD2_FUNC("enter_notify_event_get_mode", "i", "enter_notify_event", enter_notify_event_get_mode) \
STD2_FUNC("enter_notify_event_set_mode", "", "enter_notify_event i", enter_notify_event_set_mode) \
STD2_FUNC("enter_notify_event_get_same_screen_focus", "i", "enter_notify_event", enter_notify_event_get_same_screen_focus) \
STD2_FUNC("enter_notify_event_set_same_screen_focus", "", "enter_notify_event i", enter_notify_event_set_same_screen_focus) \
STD2_FUNC("to_enter_notify_event", "enter_notify_event", "generic_event", to_enter_notify_event) \
STD2_FUNC("focus_in_event_get_detail", "i", "focus_in_event", focus_in_event_get_detail) \
STD2_FUNC("focus_in_event_set_detail", "", "focus_in_event i", focus_in_event_set_detail) \
STD2_FUNC("focus_in_event_get_event", "i", "focus_in_event", focus_in_event_get_event) \
STD2_FUNC("focus_in_event_set_event", "", "focus_in_event i", focus_in_event_set_event) \
STD2_FUNC("focus_in_event_get_mode", "i", "focus_in_event", focus_in_event_get_mode) \
STD2_FUNC("focus_in_event_set_mode", "", "focus_in_event i", focus_in_event_set_mode) \
STD2_FUNC("to_focus_in_event", "focus_in_event", "generic_event", to_focus_in_event) \
STD2_FUNC("to_keymap_notify_event", "keymap_notify_event", "generic_event", to_keymap_notify_event) \
STD2_FUNC("expose_event_get_window", "i", "expose_event", expose_event_get_window) \
STD2_FUNC("expose_event_set_window", "", "expose_event i", expose_event_set_window) \
STD2_FUNC("expose_event_get_x", "i", "expose_event", expose_event_get_x) \
STD2_FUNC("expose_event_set_x", "", "expose_event i", expose_event_set_x) \
STD2_FUNC("expose_event_get_y", "i", "expose_event", expose_event_get_y) \
STD2_FUNC("expose_event_set_y", "", "expose_event i", expose_event_set_y) \
STD2_FUNC("expose_event_get_width", "i", "expose_event", expose_event_get_width) \
STD2_FUNC("expose_event_set_width", "", "expose_event i", expose_event_set_width) \
STD2_FUNC("expose_event_get_height", "i", "expose_event", expose_event_get_height) \
STD2_FUNC("expose_event_set_height", "", "expose_event i", expose_event_set_height) \
STD2_FUNC("expose_event_get_count", "i", "expose_event", expose_event_get_count) \
STD2_FUNC("expose_event_set_count", "", "expose_event i", expose_event_set_count) \
STD2_FUNC("to_expose_event", "expose_event", "generic_event", to_expose_event) \
STD2_FUNC("graphics_exposure_event_get_drawable", "i", "graphics_exposure_event", graphics_exposure_event_get_drawable) \
STD2_FUNC("graphics_exposure_event_set_drawable", "", "graphics_exposure_event i", graphics_exposure_event_set_drawable) \
STD2_FUNC("graphics_exposure_event_get_x", "i", "graphics_exposure_event", graphics_exposure_event_get_x) \
STD2_FUNC("graphics_exposure_event_set_x", "", "graphics_exposure_event i", graphics_exposure_event_set_x) \
STD2_FUNC("graphics_exposure_event_get_y", "i", "graphics_exposure_event", graphics_exposure_event_get_y) \
STD2_FUNC("graphics_exposure_event_set_y", "", "graphics_exposure_event i", graphics_exposure_event_set_y) \
STD2_FUNC("graphics_exposure_event_get_width", "i", "graphics_exposure_event", graphics_exposure_event_get_width) \
STD2_FUNC("graphics_exposure_event_set_width", "", "graphics_exposure_event i", graphics_exposure_event_set_width) \
STD2_FUNC("graphics_exposure_event_get_height", "i", "graphics_exposure_event", graphics_exposure_event_get_height) \
STD2_FUNC("graphics_exposure_event_set_height", "", "graphics_exposure_event i", graphics_exposure_event_set_height) \
STD2_FUNC("graphics_exposure_event_get_minor_opcode", "i", "graphics_exposure_event", graphics_exposure_event_get_minor_opcode) \
STD2_FUNC("graphics_exposure_event_set_minor_opcode", "", "graphics_exposure_event i", graphics_exposure_event_set_minor_opcode) \
STD2_FUNC("graphics_exposure_event_get_count", "i", "graphics_exposure_event", graphics_exposure_event_get_count) \
STD2_FUNC("graphics_exposure_event_set_count", "", "graphics_exposure_event i", graphics_exposure_event_set_count) \
STD2_FUNC("graphics_exposure_event_get_major_opcode", "i", "graphics_exposure_event", graphics_exposure_event_get_major_opcode) \
STD2_FUNC("graphics_exposure_event_set_major_opcode", "", "graphics_exposure_event i", graphics_exposure_event_set_major_opcode) \
STD2_FUNC("to_graphics_exposure_event", "graphics_exposure_event", "generic_event", to_graphics_exposure_event) \
STD2_FUNC("no_exposure_event_get_drawable", "i", "no_exposure_event", no_exposure_event_get_drawable) \
STD2_FUNC("no_exposure_event_set_drawable", "", "no_exposure_event i", no_exposure_event_set_drawable) \
STD2_FUNC("no_exposure_event_get_minor_opcode", "i", "no_exposure_event", no_exposure_event_get_minor_opcode) \
STD2_FUNC("no_exposure_event_set_minor_opcode", "", "no_exposure_event i", no_exposure_event_set_minor_opcode) \
STD2_FUNC("no_exposure_event_get_major_opcode", "i", "no_exposure_event", no_exposure_event_get_major_opcode) \
STD2_FUNC("no_exposure_event_set_major_opcode", "", "no_exposure_event i", no_exposure_event_set_major_opcode) \
STD2_FUNC("to_no_exposure_event", "no_exposure_event", "generic_event", to_no_exposure_event) \
STD2_FUNC("visibility_notify_event_get_window", "i", "visibility_notify_event", visibility_notify_event_get_window) \
STD2_FUNC("visibility_notify_event_set_window", "", "visibility_notify_event i", visibility_notify_event_set_window) \
STD2_FUNC("visibility_notify_event_get_state", "i", "visibility_notify_event", visibility_notify_event_get_state) \
STD2_FUNC("visibility_notify_event_set_state", "", "visibility_notify_event i", visibility_notify_event_set_state) \
STD2_FUNC("to_visibility_notify_event", "visibility_notify_event", "generic_event", to_visibility_notify_event) \
STD2_FUNC("create_notify_event_get_parent", "i", "create_notify_event", create_notify_event_get_parent) \
STD2_FUNC("create_notify_event_set_parent", "", "create_notify_event i", create_notify_event_set_parent) \
STD2_FUNC("create_notify_event_get_window", "i", "create_notify_event", create_notify_event_get_window) \
STD2_FUNC("create_notify_event_set_window", "", "create_notify_event i", create_notify_event_set_window) \
STD2_FUNC("create_notify_event_get_x", "i", "create_notify_event", create_notify_event_get_x) \
STD2_FUNC("create_notify_event_set_x", "", "create_notify_event i", create_notify_event_set_x) \
STD2_FUNC("create_notify_event_get_y", "i", "create_notify_event", create_notify_event_get_y) \
STD2_FUNC("create_notify_event_set_y", "", "create_notify_event i", create_notify_event_set_y) \
STD2_FUNC("create_notify_event_get_width", "i", "create_notify_event", create_notify_event_get_width) \
STD2_FUNC("create_notify_event_set_width", "", "create_notify_event i", create_notify_event_set_width) \
STD2_FUNC("create_notify_event_get_height", "i", "create_notify_event", create_notify_event_get_height) \
STD2_FUNC("create_notify_event_set_height", "", "create_notify_event i", create_notify_event_set_height) \
STD2_FUNC("create_notify_event_get_border_width", "i", "create_notify_event", create_notify_event_get_border_width) \
STD2_FUNC("create_notify_event_set_border_width", "", "create_notify_event i", create_notify_event_set_border_width) \
STD2_FUNC("create_notify_event_get_override_redirect", "i", "create_notify_event", create_notify_event_get_override_redirect) \
STD2_FUNC("create_notify_event_set_override_redirect", "", "create_notify_event i", create_notify_event_set_override_redirect) \
STD2_FUNC("to_create_notify_event", "create_notify_event", "generic_event", to_create_notify_event) \
STD2_FUNC("destroy_notify_event_get_event", "i", "destroy_notify_event", destroy_notify_event_get_event) \
STD2_FUNC("destroy_notify_event_set_event", "", "destroy_notify_event i", destroy_notify_event_set_event) \
STD2_FUNC("destroy_notify_event_get_window", "i", "destroy_notify_event", destroy_notify_event_get_window) \
STD2_FUNC("destroy_notify_event_set_window", "", "destroy_notify_event i", destroy_notify_event_set_window) \
STD2_FUNC("to_destroy_notify_event", "destroy_notify_event", "generic_event", to_destroy_notify_event) \
STD2_FUNC("unmap_notify_event_get_event", "i", "unmap_notify_event", unmap_notify_event_get_event) \
STD2_FUNC("unmap_notify_event_set_event", "", "unmap_notify_event i", unmap_notify_event_set_event) \
STD2_FUNC("unmap_notify_event_get_window", "i", "unmap_notify_event", unmap_notify_event_get_window) \
STD2_FUNC("unmap_notify_event_set_window", "", "unmap_notify_event i", unmap_notify_event_set_window) \
STD2_FUNC("unmap_notify_event_get_from_configure", "i", "unmap_notify_event", unmap_notify_event_get_from_configure) \
STD2_FUNC("unmap_notify_event_set_from_configure", "", "unmap_notify_event i", unmap_notify_event_set_from_configure) \
STD2_FUNC("to_unmap_notify_event", "unmap_notify_event", "generic_event", to_unmap_notify_event) \
STD2_FUNC("map_notify_event_get_event", "i", "map_notify_event", map_notify_event_get_event) \
STD2_FUNC("map_notify_event_set_event", "", "map_notify_event i", map_notify_event_set_event) \
STD2_FUNC("map_notify_event_get_window", "i", "map_notify_event", map_notify_event_get_window) \
STD2_FUNC("map_notify_event_set_window", "", "map_notify_event i", map_notify_event_set_window) \
STD2_FUNC("map_notify_event_get_override_redirect", "i", "map_notify_event", map_notify_event_get_override_redirect) \
STD2_FUNC("map_notify_event_set_override_redirect", "", "map_notify_event i", map_notify_event_set_override_redirect) \
STD2_FUNC("to_map_notify_event", "map_notify_event", "generic_event", to_map_notify_event) \
STD2_FUNC("map_request_event_get_parent", "i", "map_request_event", map_request_event_get_parent) \
STD2_FUNC("map_request_event_set_parent", "", "map_request_event i", map_request_event_set_parent) \
STD2_FUNC("map_request_event_get_window", "i", "map_request_event", map_request_event_get_window) \
STD2_FUNC("map_request_event_set_window", "", "map_request_event i", map_request_event_set_window) \
STD2_FUNC("to_map_request_event", "map_request_event", "generic_event", to_map_request_event) \
STD2_FUNC("reparent_notify_event_get_event", "i", "reparent_notify_event", reparent_notify_event_get_event) \
STD2_FUNC("reparent_notify_event_set_event", "", "reparent_notify_event i", reparent_notify_event_set_event) \
STD2_FUNC("reparent_notify_event_get_window", "i", "reparent_notify_event", reparent_notify_event_get_window) \
STD2_FUNC("reparent_notify_event_set_window", "", "reparent_notify_event i", reparent_notify_event_set_window) \
STD2_FUNC("reparent_notify_event_get_parent", "i", "reparent_notify_event", reparent_notify_event_get_parent) \
STD2_FUNC("reparent_notify_event_set_parent", "", "reparent_notify_event i", reparent_notify_event_set_parent) \
STD2_FUNC("reparent_notify_event_get_x", "i", "reparent_notify_event", reparent_notify_event_get_x) \
STD2_FUNC("reparent_notify_event_set_x", "", "reparent_notify_event i", reparent_notify_event_set_x) \
STD2_FUNC("reparent_notify_event_get_y", "i", "reparent_notify_event", reparent_notify_event_get_y) \
STD2_FUNC("reparent_notify_event_set_y", "", "reparent_notify_event i", reparent_notify_event_set_y) \
STD2_FUNC("reparent_notify_event_get_override_redirect", "i", "reparent_notify_event", reparent_notify_event_get_override_redirect) \
STD2_FUNC("reparent_notify_event_set_override_redirect", "", "reparent_notify_event i", reparent_notify_event_set_override_redirect) \
STD2_FUNC("to_reparent_notify_event", "reparent_notify_event", "generic_event", to_reparent_notify_event) \
STD2_FUNC("configure_notify_event_get_event", "i", "configure_notify_event", configure_notify_event_get_event) \
STD2_FUNC("configure_notify_event_set_event", "", "configure_notify_event i", configure_notify_event_set_event) \
STD2_FUNC("configure_notify_event_get_window", "i", "configure_notify_event", configure_notify_event_get_window) \
STD2_FUNC("configure_notify_event_set_window", "", "configure_notify_event i", configure_notify_event_set_window) \
STD2_FUNC("configure_notify_event_get_above_sibling", "i", "configure_notify_event", configure_notify_event_get_above_sibling) \
STD2_FUNC("configure_notify_event_set_above_sibling", "", "configure_notify_event i", configure_notify_event_set_above_sibling) \
STD2_FUNC("configure_notify_event_get_x", "i", "configure_notify_event", configure_notify_event_get_x) \
STD2_FUNC("configure_notify_event_set_x", "", "configure_notify_event i", configure_notify_event_set_x) \
STD2_FUNC("configure_notify_event_get_y", "i", "configure_notify_event", configure_notify_event_get_y) \
STD2_FUNC("configure_notify_event_set_y", "", "configure_notify_event i", configure_notify_event_set_y) \
STD2_FUNC("configure_notify_event_get_width", "i", "configure_notify_event", configure_notify_event_get_width) \
STD2_FUNC("configure_notify_event_set_width", "", "configure_notify_event i", configure_notify_event_set_width) \
STD2_FUNC("configure_notify_event_get_height", "i", "configure_notify_event", configure_notify_event_get_height) \
STD2_FUNC("configure_notify_event_set_height", "", "configure_notify_event i", configure_notify_event_set_height) \
STD2_FUNC("configure_notify_event_get_border_width", "i", "configure_notify_event", configure_notify_event_get_border_width) \
STD2_FUNC("configure_notify_event_set_border_width", "", "configure_notify_event i", configure_notify_event_set_border_width) \
STD2_FUNC("configure_notify_event_get_override_redirect", "i", "configure_notify_event", configure_notify_event_get_override_redirect) \
STD2_FUNC("configure_notify_event_set_override_redirect", "", "configure_notify_event i", configure_notify_event_set_override_redirect) \
STD2_FUNC("to_configure_notify_event", "configure_notify_event", "generic_event", to_configure_notify_event) \
STD2_FUNC("configure_request_event_get_stack_mode", "i", "configure_request_event", configure_request_event_get_stack_mode) \
STD2_FUNC("configure_request_event_set_stack_mode", "", "configure_request_event i", configure_request_event_set_stack_mode) \
STD2_FUNC("configure_request_event_get_parent", "i", "configure_request_event", configure_request_event_get_parent) \
STD2_FUNC("configure_request_event_set_parent", "", "configure_request_event i", configure_request_event_set_parent) \
STD2_FUNC("configure_request_event_get_window", "i", "configure_request_event", configure_request_event_get_window) \
STD2_FUNC("configure_request_event_set_window", "", "configure_request_event i", configure_request_event_set_window) \
STD2_FUNC("configure_request_event_get_sibling", "i", "configure_request_event", configure_request_event_get_sibling) \
STD2_FUNC("configure_request_event_set_sibling", "", "configure_request_event i", configure_request_event_set_sibling) \
STD2_FUNC("configure_request_event_get_x", "i", "configure_request_event", configure_request_event_get_x) \
STD2_FUNC("configure_request_event_set_x", "", "configure_request_event i", configure_request_event_set_x) \
STD2_FUNC("configure_request_event_get_y", "i", "configure_request_event", configure_request_event_get_y) \
STD2_FUNC("configure_request_event_set_y", "", "configure_request_event i", configure_request_event_set_y) \
STD2_FUNC("configure_request_event_get_width", "i", "configure_request_event", configure_request_event_get_width) \
STD2_FUNC("configure_request_event_set_width", "", "configure_request_event i", configure_request_event_set_width) \
STD2_FUNC("configure_request_event_get_height", "i", "configure_request_event", configure_request_event_get_height) \
STD2_FUNC("configure_request_event_set_height", "", "configure_request_event i", configure_request_event_set_height) \
STD2_FUNC("configure_request_event_get_border_width", "i", "configure_request_event", configure_request_event_get_border_width) \
STD2_FUNC("configure_request_event_set_border_width", "", "configure_request_event i", configure_request_event_set_border_width) \
STD2_FUNC("configure_request_event_get_value_mask", "i", "configure_request_event", configure_request_event_get_value_mask) \
STD2_FUNC("configure_request_event_set_value_mask", "", "configure_request_event i", configure_request_event_set_value_mask) \
STD2_FUNC("to_configure_request_event", "configure_request_event", "generic_event", to_configure_request_event) \
STD2_FUNC("gravity_notify_event_get_event", "i", "gravity_notify_event", gravity_notify_event_get_event) \
STD2_FUNC("gravity_notify_event_set_event", "", "gravity_notify_event i", gravity_notify_event_set_event) \
STD2_FUNC("gravity_notify_event_get_window", "i", "gravity_notify_event", gravity_notify_event_get_window) \
STD2_FUNC("gravity_notify_event_set_window", "", "gravity_notify_event i", gravity_notify_event_set_window) \
STD2_FUNC("gravity_notify_event_get_x", "i", "gravity_notify_event", gravity_notify_event_get_x) \
STD2_FUNC("gravity_notify_event_set_x", "", "gravity_notify_event i", gravity_notify_event_set_x) \
STD2_FUNC("gravity_notify_event_get_y", "i", "gravity_notify_event", gravity_notify_event_get_y) \
STD2_FUNC("gravity_notify_event_set_y", "", "gravity_notify_event i", gravity_notify_event_set_y) \
STD2_FUNC("to_gravity_notify_event", "gravity_notify_event", "generic_event", to_gravity_notify_event) \
STD2_FUNC("resize_request_event_get_window", "i", "resize_request_event", resize_request_event_get_window) \
STD2_FUNC("resize_request_event_set_window", "", "resize_request_event i", resize_request_event_set_window) \
STD2_FUNC("resize_request_event_get_width", "i", "resize_request_event", resize_request_event_get_width) \
STD2_FUNC("resize_request_event_set_width", "", "resize_request_event i", resize_request_event_set_width) \
STD2_FUNC("resize_request_event_get_height", "i", "resize_request_event", resize_request_event_get_height) \
STD2_FUNC("resize_request_event_set_height", "", "resize_request_event i", resize_request_event_set_height) \
STD2_FUNC("to_resize_request_event", "resize_request_event", "generic_event", to_resize_request_event) \
STD2_FUNC("circulate_notify_event_get_event", "i", "circulate_notify_event", circulate_notify_event_get_event) \
STD2_FUNC("circulate_notify_event_set_event", "", "circulate_notify_event i", circulate_notify_event_set_event) \
STD2_FUNC("circulate_notify_event_get_window", "i", "circulate_notify_event", circulate_notify_event_get_window) \
STD2_FUNC("circulate_notify_event_set_window", "", "circulate_notify_event i", circulate_notify_event_set_window) \
STD2_FUNC("circulate_notify_event_get_place", "i", "circulate_notify_event", circulate_notify_event_get_place) \
STD2_FUNC("circulate_notify_event_set_place", "", "circulate_notify_event i", circulate_notify_event_set_place) \
STD2_FUNC("to_circulate_notify_event", "circulate_notify_event", "generic_event", to_circulate_notify_event) \
STD2_FUNC("property_notify_event_get_window", "i", "property_notify_event", property_notify_event_get_window) \
STD2_FUNC("property_notify_event_set_window", "", "property_notify_event i", property_notify_event_set_window) \
STD2_FUNC("property_notify_event_get_atom", "i", "property_notify_event", property_notify_event_get_atom) \
STD2_FUNC("property_notify_event_set_atom", "", "property_notify_event i", property_notify_event_set_atom) \
STD2_FUNC("property_notify_event_get_time", "i", "property_notify_event", property_notify_event_get_time) \
STD2_FUNC("property_notify_event_set_time", "", "property_notify_event i", property_notify_event_set_time) \
STD2_FUNC("property_notify_event_get_state", "i", "property_notify_event", property_notify_event_get_state) \
STD2_FUNC("property_notify_event_set_state", "", "property_notify_event i", property_notify_event_set_state) \
STD2_FUNC("to_property_notify_event", "property_notify_event", "generic_event", to_property_notify_event) \
STD2_FUNC("selection_clear_event_get_time", "i", "selection_clear_event", selection_clear_event_get_time) \
STD2_FUNC("selection_clear_event_set_time", "", "selection_clear_event i", selection_clear_event_set_time) \
STD2_FUNC("selection_clear_event_get_owner", "i", "selection_clear_event", selection_clear_event_get_owner) \
STD2_FUNC("selection_clear_event_set_owner", "", "selection_clear_event i", selection_clear_event_set_owner) \
STD2_FUNC("selection_clear_event_get_selection", "i", "selection_clear_event", selection_clear_event_get_selection) \
STD2_FUNC("selection_clear_event_set_selection", "", "selection_clear_event i", selection_clear_event_set_selection) \
STD2_FUNC("to_selection_clear_event", "selection_clear_event", "generic_event", to_selection_clear_event) \
STD2_FUNC("selection_request_event_get_time", "i", "selection_request_event", selection_request_event_get_time) \
STD2_FUNC("selection_request_event_set_time", "", "selection_request_event i", selection_request_event_set_time) \
STD2_FUNC("selection_request_event_get_owner", "i", "selection_request_event", selection_request_event_get_owner) \
STD2_FUNC("selection_request_event_set_owner", "", "selection_request_event i", selection_request_event_set_owner) \
STD2_FUNC("selection_request_event_get_requestor", "i", "selection_request_event", selection_request_event_get_requestor) \
STD2_FUNC("selection_request_event_set_requestor", "", "selection_request_event i", selection_request_event_set_requestor) \
STD2_FUNC("selection_request_event_get_selection", "i", "selection_request_event", selection_request_event_get_selection) \
STD2_FUNC("selection_request_event_set_selection", "", "selection_request_event i", selection_request_event_set_selection) \
STD2_FUNC("selection_request_event_get_target", "i", "selection_request_event", selection_request_event_get_target) \
STD2_FUNC("selection_request_event_set_target", "", "selection_request_event i", selection_request_event_set_target) \
STD2_FUNC("selection_request_event_get_property", "i", "selection_request_event", selection_request_event_get_property) \
STD2_FUNC("selection_request_event_set_property", "", "selection_request_event i", selection_request_event_set_property) \
STD2_FUNC("to_selection_request_event", "selection_request_event", "generic_event", to_selection_request_event) \
STD2_FUNC("selection_notify_event_get_time", "i", "selection_notify_event", selection_notify_event_get_time) \
STD2_FUNC("selection_notify_event_set_time", "", "selection_notify_event i", selection_notify_event_set_time) \
STD2_FUNC("selection_notify_event_get_requestor", "i", "selection_notify_event", selection_notify_event_get_requestor) \
STD2_FUNC("selection_notify_event_set_requestor", "", "selection_notify_event i", selection_notify_event_set_requestor) \
STD2_FUNC("selection_notify_event_get_selection", "i", "selection_notify_event", selection_notify_event_get_selection) \
STD2_FUNC("selection_notify_event_set_selection", "", "selection_notify_event i", selection_notify_event_set_selection) \
STD2_FUNC("selection_notify_event_get_target", "i", "selection_notify_event", selection_notify_event_get_target) \
STD2_FUNC("selection_notify_event_set_target", "", "selection_notify_event i", selection_notify_event_set_target) \
STD2_FUNC("selection_notify_event_get_property", "i", "selection_notify_event", selection_notify_event_get_property) \
STD2_FUNC("selection_notify_event_set_property", "", "selection_notify_event i", selection_notify_event_set_property) \
STD2_FUNC("to_selection_notify_event", "selection_notify_event", "generic_event", to_selection_notify_event) \
STD2_FUNC("colormap_notify_event_get_window", "i", "colormap_notify_event", colormap_notify_event_get_window) \
STD2_FUNC("colormap_notify_event_set_window", "", "colormap_notify_event i", colormap_notify_event_set_window) \
STD2_FUNC("colormap_notify_event_get_colormap", "i", "colormap_notify_event", colormap_notify_event_get_colormap) \
STD2_FUNC("colormap_notify_event_set_colormap", "", "colormap_notify_event i", colormap_notify_event_set_colormap) \
STD2_FUNC("colormap_notify_event_get_new", "i", "colormap_notify_event", colormap_notify_event_get_new) \
STD2_FUNC("colormap_notify_event_set_new", "", "colormap_notify_event i", colormap_notify_event_set_new) \
STD2_FUNC("colormap_notify_event_get_state", "i", "colormap_notify_event", colormap_notify_event_get_state) \
STD2_FUNC("colormap_notify_event_set_state", "", "colormap_notify_event i", colormap_notify_event_set_state) \
STD2_FUNC("to_colormap_notify_event", "colormap_notify_event", "generic_event", to_colormap_notify_event) \
STD2_FUNC("client_message_event_get_format", "i", "client_message_event", client_message_event_get_format) \
STD2_FUNC("client_message_event_set_format", "", "client_message_event i", client_message_event_set_format) \
STD2_FUNC("client_message_event_get_window", "i", "client_message_event", client_message_event_get_window) \
STD2_FUNC("client_message_event_set_window", "", "client_message_event i", client_message_event_set_window) \
STD2_FUNC("client_message_event_get_type", "i", "client_message_event", client_message_event_get_type) \
STD2_FUNC("client_message_event_set_type", "", "client_message_event i", client_message_event_set_type) \
STD2_FUNC("to_client_message_event", "client_message_event", "generic_event", to_client_message_event) \
STD2_FUNC("mapping_notify_event_get_request", "i", "mapping_notify_event", mapping_notify_event_get_request) \
STD2_FUNC("mapping_notify_event_set_request", "", "mapping_notify_event i", mapping_notify_event_set_request) \
STD2_FUNC("mapping_notify_event_get_first_keycode", "i", "mapping_notify_event", mapping_notify_event_get_first_keycode) \
STD2_FUNC("mapping_notify_event_set_first_keycode", "", "mapping_notify_event i", mapping_notify_event_set_first_keycode) \
STD2_FUNC("mapping_notify_event_get_count", "i", "mapping_notify_event", mapping_notify_event_get_count) \
STD2_FUNC("mapping_notify_event_set_count", "", "mapping_notify_event i", mapping_notify_event_set_count) \
STD2_FUNC("to_mapping_notify_event", "mapping_notify_event", "generic_event", to_mapping_notify_event) \
STD2_FUNC("create_window", "void_cookie", "connection i i i i i i i i i i i valueparam32", create_window) \
STD2_FUNC("change_window_attributes", "void_cookie", "connection i i valueparam32", change_window_attributes) \
STD2_FUNC("get_window_attributes", "get_window_attributes_cookie", "connection i", get_window_attributes) \
STD2_FUNC("destroy_window", "void_cookie", "connection i", destroy_window) \
STD2_FUNC("destroy_subwindows", "void_cookie", "connection i", destroy_subwindows) \
STD2_FUNC("change_save_set", "void_cookie", "connection i i", change_save_set) \
STD2_FUNC("reparent_window", "void_cookie", "connection i i i i", reparent_window) \
STD2_FUNC("map_window", "void_cookie", "connection i", map_window) \
STD2_FUNC("map_subwindows", "void_cookie", "connection i", map_subwindows) \
STD2_FUNC("unmap_window", "void_cookie", "connection i", unmap_window) \
STD2_FUNC("unmap_subwindows", "void_cookie", "connection i", unmap_subwindows) \
STD2_FUNC("circulate_window", "void_cookie", "connection i i", circulate_window) \
STD2_FUNC("get_geometry", "get_geometry_cookie", "connection i", get_geometry) \
STD2_FUNC("query_tree_get_children", "i", "query_tree_reply i", query_tree_get_children) \
STD2_FUNC("query_tree_children_length", "i", "query_tree_reply", query_tree_children_length) \
STD2_FUNC("query_tree", "query_tree_cookie", "connection i", query_tree) \
STD2_FUNC("intern_atom", "intern_atom_cookie", "connection i i cb", intern_atom) \
STD2_FUNC("get_atom_name_get_name", "ms", "get_atom_name_reply i", get_atom_name_get_name) \
STD2_FUNC("get_atom_name_name_length", "i", "get_atom_name_reply", get_atom_name_name_length) \
STD2_FUNC("get_atom_name", "get_atom_name_cookie", "connection i", get_atom_name) \
STD2_FUNC("delete_property", "void_cookie", "connection i i", delete_property) \
STD2_FUNC("get_property_get_value", "void", "get_property_reply i", get_property_get_value) \
STD2_FUNC("get_property_value_length", "i", "get_property_reply", get_property_value_length) \
STD2_FUNC("get_property", "get_property_cookie", "connection i i i i i i", get_property) \
STD2_FUNC("list_properties_get_atoms", "i", "list_properties_reply i", list_properties_get_atoms) \
STD2_FUNC("list_properties_atoms_length", "i", "list_properties_reply", list_properties_atoms_length) \
STD2_FUNC("list_properties", "list_properties_cookie", "connection i", list_properties) \
STD2_FUNC("set_selection_owner", "void_cookie", "connection i i i", set_selection_owner) \
STD2_FUNC("get_selection_owner", "get_selection_owner_cookie", "connection i", get_selection_owner) \
STD2_FUNC("convert_selection", "void_cookie", "connection i i i i i", convert_selection) \
STD2_FUNC("send_event", "void_cookie", "connection i i i cb", send_event) \
STD2_FUNC("grab_pointer", "grab_pointer_cookie", "connection i i i i i i i i", grab_pointer) \
STD2_FUNC("ungrab_pointer", "void_cookie", "connection i", ungrab_pointer) \
STD2_FUNC("grab_button", "void_cookie", "connection i i i i i i i i i", grab_button) \
STD2_FUNC("ungrab_button", "void_cookie", "connection i i i", ungrab_button) \
STD2_FUNC("change_active_pointer_grab", "void_cookie", "connection i i i", change_active_pointer_grab) \
STD2_FUNC("grab_keyboard", "grab_keyboard_cookie", "connection i i i i i", grab_keyboard) \
STD2_FUNC("ungrab_keyboard", "void_cookie", "connection i", ungrab_keyboard) \
STD2_FUNC("grab_key", "void_cookie", "connection i i i i i i", grab_key) \
STD2_FUNC("ungrab_key", "void_cookie", "connection i i i", ungrab_key) \
STD2_FUNC("allow_events", "void_cookie", "connection i i", allow_events) \
STD2_FUNC("grab_server", "void_cookie", "connection", grab_server) \
STD2_FUNC("ungrab_server", "void_cookie", "connection", ungrab_server) \
STD2_FUNC("query_pointer", "query_pointer_cookie", "connection i", query_pointer) \
STD2_FUNC("timecoord_get_time", "i", "timecoord", timecoord_get_time) \
STD2_FUNC("timecoord_set_time", "", "timecoord i", timecoord_set_time) \
STD2_FUNC("timecoord_get_x", "i", "timecoord", timecoord_get_x) \
STD2_FUNC("timecoord_set_x", "", "timecoord i", timecoord_set_x) \
STD2_FUNC("timecoord_get_y", "i", "timecoord", timecoord_get_y) \
STD2_FUNC("timecoord_set_y", "", "timecoord i", timecoord_set_y) \
STD2_FUNC("get_motion_events_get_events", "timecoord", "get_motion_events_reply i", get_motion_events_get_events) \
STD2_FUNC("get_motion_events_events_length", "i", "get_motion_events_reply", get_motion_events_events_length) \
STD2_FUNC("get_motion_events", "get_motion_events_cookie", "connection i i i", get_motion_events) \
STD2_FUNC("translate_coordinates", "translate_coordinates_cookie", "connection i i i i", translate_coordinates) \
STD2_FUNC("warp_pointer", "void_cookie", "connection i i i i i i i i", warp_pointer) \
STD2_FUNC("set_input_focus", "void_cookie", "connection i i i", set_input_focus) \
STD2_FUNC("get_input_focus", "get_input_focus_cookie", "connection", get_input_focus) \
STD2_FUNC("query_keymap_get_keys", "i", "query_keymap_reply i", query_keymap_get_keys) \
STD2_FUNC("query_keymap_keys_length", "i", "query_keymap_reply", query_keymap_keys_length) \
STD2_FUNC("query_keymap", "query_keymap_cookie", "connection", query_keymap) \
STD2_FUNC("open_font", "void_cookie", "connection i i cb", open_font) \
STD2_FUNC("close_font", "void_cookie", "connection i", close_font) \
STD2_FUNC("fontprop_get_name", "i", "fontprop", fontprop_get_name) \
STD2_FUNC("fontprop_set_name", "", "fontprop i", fontprop_set_name) \
STD2_FUNC("fontprop_get_value", "i", "fontprop", fontprop_get_value) \
STD2_FUNC("fontprop_set_value", "", "fontprop i", fontprop_set_value) \
STD2_FUNC("charinfo_get_left_side_bearing", "i", "charinfo", charinfo_get_left_side_bearing) \
STD2_FUNC("charinfo_set_left_side_bearing", "", "charinfo i", charinfo_set_left_side_bearing) \
STD2_FUNC("charinfo_get_right_side_bearing", "i", "charinfo", charinfo_get_right_side_bearing) \
STD2_FUNC("charinfo_set_right_side_bearing", "", "charinfo i", charinfo_set_right_side_bearing) \
STD2_FUNC("charinfo_get_character_width", "i", "charinfo", charinfo_get_character_width) \
STD2_FUNC("charinfo_set_character_width", "", "charinfo i", charinfo_set_character_width) \
STD2_FUNC("charinfo_get_ascent", "i", "charinfo", charinfo_get_ascent) \
STD2_FUNC("charinfo_set_ascent", "", "charinfo i", charinfo_set_ascent) \
STD2_FUNC("charinfo_get_descent", "i", "charinfo", charinfo_get_descent) \
STD2_FUNC("charinfo_set_descent", "", "charinfo i", charinfo_set_descent) \
STD2_FUNC("charinfo_get_attributes", "i", "charinfo", charinfo_get_attributes) \
STD2_FUNC("charinfo_set_attributes", "", "charinfo i", charinfo_set_attributes) \
STD2_FUNC("query_font_get_properties", "fontprop", "query_font_reply i", query_font_get_properties) \
STD2_FUNC("query_font_properties_length", "i", "query_font_reply", query_font_properties_length) \
STD2_FUNC("query_font_get_char_infos", "charinfo", "query_font_reply i", query_font_get_char_infos) \
STD2_FUNC("query_font_char_infos_length", "i", "query_font_reply", query_font_char_infos_length) \
STD2_FUNC("query_font", "query_font_cookie", "connection i", query_font) \
STD2_FUNC("str_get_name_len", "i", "str", str_get_name_len) \
STD2_FUNC("str_set_name_len", "", "str i", str_set_name_len) \
STD2_FUNC("str_get_name", "ms", "str i", str_get_name) \
STD2_FUNC("str_name_length", "i", "str", str_name_length) \
STD2_FUNC("list_fonts_get_names", "str", "list_fonts_reply i", list_fonts_get_names) \
STD2_FUNC("list_fonts_names_length", "i", "list_fonts_reply", list_fonts_names_length) \
STD2_FUNC("list_fonts", "list_fonts_cookie", "connection i i cb", list_fonts) \
STD2_FUNC("list_fonts_with_info_get_properties", "fontprop", "list_fonts_with_info_reply i", list_fonts_with_info_get_properties) \
STD2_FUNC("list_fonts_with_info_properties_length", "i", "list_fonts_with_info_reply", list_fonts_with_info_properties_length) \
STD2_FUNC("list_fonts_with_info_get_name", "ms", "list_fonts_with_info_reply i", list_fonts_with_info_get_name) \
STD2_FUNC("list_fonts_with_info_name_length", "i", "list_fonts_with_info_reply", list_fonts_with_info_name_length) \
STD2_FUNC("list_fonts_with_info", "list_fonts_with_info_cookie", "connection i i cb", list_fonts_with_info) \
STD2_FUNC("set_font_path", "void_cookie", "connection i i cb", set_font_path) \
STD2_FUNC("get_font_path_get_path", "str", "get_font_path_reply i", get_font_path_get_path) \
STD2_FUNC("get_font_path_path_length", "i", "get_font_path_reply", get_font_path_path_length) \
STD2_FUNC("get_font_path", "get_font_path_cookie", "connection", get_font_path) \
STD2_FUNC("create_pixmap", "void_cookie", "connection i i i i i", create_pixmap) \
STD2_FUNC("free_pixmap", "void_cookie", "connection i", free_pixmap) \
STD2_FUNC("create_gc", "void_cookie", "connection i i i valueparam32", create_gc) \
STD2_FUNC("change_gc", "void_cookie", "connection i i valueparam32", change_gc) \
STD2_FUNC("copy_gc", "void_cookie", "connection i i i", copy_gc) \
STD2_FUNC("free_gc", "void_cookie", "connection i", free_gc) \
STD2_FUNC("clear_area", "void_cookie", "connection i i i i i i", clear_area) \
STD2_FUNC("copy_area", "void_cookie", "connection i i i i i i i i i", copy_area) \
STD2_FUNC("copy_plane", "void_cookie", "connection i i i i i i i i i i", copy_plane) \
STD2_FUNC("segment_get_x1", "i", "segment", segment_get_x1) \
STD2_FUNC("segment_set_x1", "", "segment i", segment_set_x1) \
STD2_FUNC("segment_get_y1", "i", "segment", segment_get_y1) \
STD2_FUNC("segment_set_y1", "", "segment i", segment_set_y1) \
STD2_FUNC("segment_get_x2", "i", "segment", segment_get_x2) \
STD2_FUNC("segment_set_x2", "", "segment i", segment_set_x2) \
STD2_FUNC("segment_get_y2", "i", "segment", segment_get_y2) \
STD2_FUNC("segment_set_y2", "", "segment i", segment_set_y2) \
STD2_FUNC("get_image_get_data", "i", "get_image_reply i", get_image_get_data) \
STD2_FUNC("get_image_data_length", "i", "get_image_reply", get_image_data_length) \
STD2_FUNC("get_image", "get_image_cookie", "connection i i i i i i i", get_image) \
STD2_FUNC("image_text_8", "void_cookie", "connection i i i i i cb", image_text_8) \
STD2_FUNC("create_colormap", "void_cookie", "connection i i i i", create_colormap) \
STD2_FUNC("free_colormap", "void_cookie", "connection i", free_colormap) \
STD2_FUNC("copy_colormap_and_free", "void_cookie", "connection i i", copy_colormap_and_free) \
STD2_FUNC("install_colormap", "void_cookie", "connection i", install_colormap) \
STD2_FUNC("uninstall_colormap", "void_cookie", "connection i", uninstall_colormap) \
STD2_FUNC("list_installed_colormaps_get_cmaps", "i", "list_installed_colormaps_reply i", list_installed_colormaps_get_cmaps) \
STD2_FUNC("list_installed_colormaps_cmaps_length", "i", "list_installed_colormaps_reply", list_installed_colormaps_cmaps_length) \
STD2_FUNC("list_installed_colormaps", "list_installed_colormaps_cookie", "connection i", list_installed_colormaps) \
STD2_FUNC("alloc_color", "alloc_color_cookie", "connection i i i i", alloc_color) \
STD2_FUNC("alloc_named_color", "alloc_named_color_cookie", "connection i i cb", alloc_named_color) \
STD2_FUNC("alloc_color_cells_get_pixels", "i", "alloc_color_cells_reply i", alloc_color_cells_get_pixels) \
STD2_FUNC("alloc_color_cells_pixels_length", "i", "alloc_color_cells_reply", alloc_color_cells_pixels_length) \
STD2_FUNC("alloc_color_cells_get_masks", "i", "alloc_color_cells_reply i", alloc_color_cells_get_masks) \
STD2_FUNC("alloc_color_cells_masks_length", "i", "alloc_color_cells_reply", alloc_color_cells_masks_length) \
STD2_FUNC("alloc_color_cells", "alloc_color_cells_cookie", "connection i i i i", alloc_color_cells) \
STD2_FUNC("alloc_color_planes_get_pixels", "i", "alloc_color_planes_reply i", alloc_color_planes_get_pixels) \
STD2_FUNC("alloc_color_planes_pixels_length", "i", "alloc_color_planes_reply", alloc_color_planes_pixels_length) \
STD2_FUNC("alloc_color_planes", "alloc_color_planes_cookie", "connection i i i i i i", alloc_color_planes) \
STD2_FUNC("coloritem_get_pixel", "i", "coloritem", coloritem_get_pixel) \
STD2_FUNC("coloritem_set_pixel", "", "coloritem i", coloritem_set_pixel) \
STD2_FUNC("coloritem_get_red", "i", "coloritem", coloritem_get_red) \
STD2_FUNC("coloritem_set_red", "", "coloritem i", coloritem_set_red) \
STD2_FUNC("coloritem_get_green", "i", "coloritem", coloritem_get_green) \
STD2_FUNC("coloritem_set_green", "", "coloritem i", coloritem_set_green) \
STD2_FUNC("coloritem_get_blue", "i", "coloritem", coloritem_get_blue) \
STD2_FUNC("coloritem_set_blue", "", "coloritem i", coloritem_set_blue) \
STD2_FUNC("coloritem_get_flags", "i", "coloritem", coloritem_get_flags) \
STD2_FUNC("coloritem_set_flags", "", "coloritem i", coloritem_set_flags) \
STD2_FUNC("store_named_color", "void_cookie", "connection i i i i cb", store_named_color) \
STD2_FUNC("rgb_get_red", "i", "rgb", rgb_get_red) \
STD2_FUNC("rgb_set_red", "", "rgb i", rgb_set_red) \
STD2_FUNC("rgb_get_green", "i", "rgb", rgb_get_green) \
STD2_FUNC("rgb_set_green", "", "rgb i", rgb_set_green) \
STD2_FUNC("rgb_get_blue", "i", "rgb", rgb_get_blue) \
STD2_FUNC("rgb_set_blue", "", "rgb i", rgb_set_blue) \
STD2_FUNC("query_colors_get_colors", "rgb", "query_colors_reply i", query_colors_get_colors) \
STD2_FUNC("query_colors_colors_length", "i", "query_colors_reply", query_colors_colors_length) \
STD2_FUNC("lookup_color", "lookup_color_cookie", "connection i i cb", lookup_color) \
STD2_FUNC("create_cursor", "void_cookie", "connection i i i i i i i i i i i", create_cursor) \
STD2_FUNC("create_glyph_cursor", "void_cookie", "connection i i i i i i i i i i i", create_glyph_cursor) \
STD2_FUNC("free_cursor", "void_cookie", "connection i", free_cursor) \
STD2_FUNC("recolor_cursor", "void_cookie", "connection i i i i i i i", recolor_cursor) \
STD2_FUNC("query_best_size", "query_best_size_cookie", "connection i i i i", query_best_size) \
STD2_FUNC("query_extension", "query_extension_cookie", "connection i cb", query_extension) \
STD2_FUNC("list_extensions_get_names", "str", "list_extensions_reply i", list_extensions_get_names) \
STD2_FUNC("list_extensions_names_length", "i", "list_extensions_reply", list_extensions_names_length) \
STD2_FUNC("list_extensions", "list_extensions_cookie", "connection", list_extensions) \
STD2_FUNC("get_keyboard_mapping_get_keysyms", "i", "get_keyboard_mapping_reply i", get_keyboard_mapping_get_keysyms) \
STD2_FUNC("get_keyboard_mapping_keysyms_length", "i", "get_keyboard_mapping_reply", get_keyboard_mapping_keysyms_length) \
STD2_FUNC("get_keyboard_mapping", "get_keyboard_mapping_cookie", "connection i i", get_keyboard_mapping) \
STD2_FUNC("change_keyboard_control", "void_cookie", "connection i valueparam32", change_keyboard_control) \
STD2_FUNC("get_keyboard_control_get_auto_repeats", "i", "get_keyboard_control_reply i", get_keyboard_control_get_auto_repeats) \
STD2_FUNC("get_keyboard_control_auto_repeats_length", "i", "get_keyboard_control_reply", get_keyboard_control_auto_repeats_length) \
STD2_FUNC("get_keyboard_control", "get_keyboard_control_cookie", "connection", get_keyboard_control) \
STD2_FUNC("bell", "void_cookie", "connection i", bell) \
STD2_FUNC("change_pointer_control", "void_cookie", "connection i i i i i", change_pointer_control) \
STD2_FUNC("get_pointer_control", "get_pointer_control_cookie", "connection", get_pointer_control) \
STD2_FUNC("set_screen_saver", "void_cookie", "connection i i i i", set_screen_saver) \
STD2_FUNC("get_screen_saver", "get_screen_saver_cookie", "connection", get_screen_saver) \
STD2_FUNC("change_hosts", "void_cookie", "connection i i i cb", change_hosts) \
STD2_FUNC("host_get_family", "i", "host", host_get_family) \
STD2_FUNC("host_set_family", "", "host i", host_set_family) \
STD2_FUNC("host_get_address_len", "i", "host", host_get_address_len) \
STD2_FUNC("host_set_address_len", "", "host i", host_set_address_len) \
STD2_FUNC("host_get_address", "i", "host i", host_get_address) \
STD2_FUNC("host_address_length", "i", "host", host_address_length) \
STD2_FUNC("list_hosts_get_hosts", "host", "list_hosts_reply i", list_hosts_get_hosts) \
STD2_FUNC("list_hosts_hosts_length", "i", "list_hosts_reply", list_hosts_hosts_length) \
STD2_FUNC("list_hosts", "list_hosts_cookie", "connection", list_hosts) \
STD2_FUNC("set_access_control", "void_cookie", "connection i", set_access_control) \
STD2_FUNC("set_close_down_mode", "void_cookie", "connection i", set_close_down_mode) \
STD2_FUNC("kill_client", "void_cookie", "connection i", kill_client) \
STD2_FUNC("force_screen_saver", "void_cookie", "connection i", force_screen_saver) \
STD2_FUNC("get_pointer_mapping_get_map", "i", "get_pointer_mapping_reply i", get_pointer_mapping_get_map) \
STD2_FUNC("get_pointer_mapping_map_length", "i", "get_pointer_mapping_reply", get_pointer_mapping_map_length) \
STD2_FUNC("get_pointer_mapping", "get_pointer_mapping_cookie", "connection", get_pointer_mapping) \
STD2_FUNC("get_modifier_mapping_get_keycodes", "i", "get_modifier_mapping_reply i", get_modifier_mapping_get_keycodes) \
STD2_FUNC("get_modifier_mapping_keycodes_length", "i", "get_modifier_mapping_reply", get_modifier_mapping_keycodes_length) \
STD2_FUNC("get_modifier_mapping", "get_modifier_mapping_cookie", "connection", get_modifier_mapping) \
STD2_FUNC("no_operation", "void_cookie", "connection", no_operation) \

