//
// Button.hh for  in /home/weinha_l/Semestre_4/mouillette_indie/include/AEntities
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Mon May 30 14:18:06 2016 Loïc Weinhard
// Last update Sat Jun  4 10:31:37 2016 Valérian Polizzi
//

#ifndef BUTTON_HH_
# define BUTTON_HH_

# include "AEntity.hh"

class	Button : public AEntity
{
private:
  int			_bg_color;
  int			_border_color;
  int			_label_color;
  int			_label_size;
  std::string		_label;  
  bool			_focus;
public:
  Button(Vec3 *size, Vec3 *pos, const std::string &label, const int bg_c = 0xFFFFFF, const int border_c = 0x000000, const int label_c = 0x000000, const int label_s = 18, const std::string & = "none");
  ~Button();

  void	setBgColor(const int);
  void	setBorderColor(const int);
  void	setLabelColor(const int);
  void	setLabel(const std::string &);
  void	setLabelSize(const int);

  int		getBgColor() const;
  int		getBorderColor() const;
  int		getLabelColor() const;
  std::string	getLabel() const;
  int		getLabelSize() const;

  Button&	operator=(const Button &);
  std::ostream&	operator<<(std::ostream &);
};

#endif
