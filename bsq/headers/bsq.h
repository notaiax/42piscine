/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 18:07:49 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/31 23:33:10 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

typedef struct	s_obstacle
{
	int					x;
	int					y;
	struct s_obstacle	*next;
}				t_obstacle;

typedef struct	s_map_info
{
	int					lines;
	int					columns;
	char				empty;
	char				obstacle;
	char				full;
	struct s_obstacle	*obstacles;
	struct s_obstacle	*last_obs;
}				t_map_info;

typedef struct	s_box
{
	int x;
	int y;
	int size;
}				t_box;

void			bsq_add_obstacle(t_map_info *mi, int i);
t_box			bsq_find(char *map, t_map_info *mi);
void			bsq_expand_box(t_box *cb, t_map_info *mi);
t_map_info		bsq_get_map_info(char **input);
int				bsq_has_obstacle(t_box *cs, t_map_info *mi);
t_box			bsq_itoxy(int i, int columns);
t_box			bsq_new_box(int x, int y, int size);
t_map_info		bsq_new_map_info(int l, char e, char o, char f);
t_obstacle		*bsq_new_obstacle(int x, int y);
t_map_info		bsq_parse(char **input);
void			bsq_print_square(char *map, t_box *biggest, t_map_info *mi);
char			*bsq_read_file(char *filename);
char			*bsq_read_file_error(char *value, char *filename, char *str);
char			*bsq_read_from_stdin(void);
int				bsq_xytoi(int x, int y, int columns);

#endif
