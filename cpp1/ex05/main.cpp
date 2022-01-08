/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:55:58 by pmontese          #+#    #+#             */
/*   Updated: 2022/01/08 15:49:53 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

int main(void)
{
	Karen *k = new Karen();
	k->complain("debug");
	k->complain("info");
	k->complain("warning");
	k->complain("error");
	k->complain("invalid option defaults to debug");
	delete k;
	return 0;
}
