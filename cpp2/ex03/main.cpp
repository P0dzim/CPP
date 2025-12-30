/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 20:07:26 by vitor             #+#    #+#             */
/*   Updated: 2025/12/30 10:25:30 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

void run_test(Point a, Point b, Point c, Point p, bool expected, std::string desc) {
	bool result = bsp(a, b, c, p);

	if (result == expected)
		std::cout << "\001\033[1;32m[OK]\002\001\033[0m\002 ";
	else
		std::cout << "\001\033[1;31m\002[ERRO]\001\033[0m\002 ";

	std::cout << desc << " | Expected: " << (expected ? "True" : "False") 
					<< " | Received: " << (result ? "True" : "False") << std::endl;
}

int main( void ) {
	Point t1_a(0.0f, 0.0f);
	Point t1_b(-2.0f, 0.0f);
	Point t1_c(0.0f, -2.0f);

	std::cout << "--- TEST 1: Right triangle A(0,0), B(-2,0), C(0,-2)---\n" << std::endl;

	run_test(t1_a, t1_b, t1_c, Point(-0.5f, -0.5f),   true,  "Center of triangle");
	run_test(t1_a, t1_b, t1_c, Point(-1.0f, -0.5f),   true,  "Inside, near B point");
	run_test(t1_a, t1_b, t1_c, Point(0.0f, 1.0f),     false, "Outside (above)");
	run_test(t1_a, t1_b, t1_c, Point(-3.0f, -1.0f),   false, "Outside (left)");
	run_test(t1_a, t1_b, t1_c, Point(-1.0f, -2.0f),   false, "Outside (below)");
	run_test(t1_a, t1_b, t1_c, Point(0.0f, 0.0f),     false, "On A dot");
	run_test(t1_a, t1_b, t1_c, Point(-2.0f, 0.0f),    false, "On B dot");
	run_test(t1_a, t1_b, t1_c, Point(0.0f, -2.0f),    false, "On C dot");
	run_test(t1_a, t1_b, t1_c, Point(-1.0f, 0.0f),    false, "On AB line");
	run_test(t1_a, t1_b, t1_c, Point(-1.0f, -1.0f),   false, "On BC line");
	run_test(t1_a, t1_b, t1_c, Point(0.0f, -1.0f),    false, "On AC line");
	run_test(t1_a, t1_b, t1_c, Point(-0.99f, -0.99f), true,  "Inside near BC line");
	run_test(t1_a, t1_b, t1_c, Point(-1.01f, -1.01f), false, "Outsine near BC line");

	Point t2_a(0.0f, 4.0f);
	Point t2_b(-2.0f, 0.0f);
	Point t2_c(2.0f, 0.0f);

	std::cout << "\n--- Teste 2: Isosceles triangle A(0, 4), B(-2, 0), C(2, 0) ---\n" << std::endl;

	run_test(t2_a, t2_b, t2_c, Point(0.0f, 2.0f),   true,  "Center of triangle");
	run_test(t2_a, t2_b, t2_c, Point(-1.9f, 0.1f),  true,  "Inside, near B point");
	run_test(t2_a, t2_b, t2_c, Point(0.0f, 4.1f),   false, "Outside (above)");
	run_test(t2_a, t2_b, t2_c, Point(2.0f, -2.0f),  false, "Outside (left)");
	run_test(t2_a, t2_b, t2_c, Point(0.0f, -2.0f),  false, "Outside (below)");
	run_test(t2_a, t2_b, t2_c, Point(0.0f, 4.0f),   false, "On A dot");
	run_test(t2_a, t2_b, t2_c, Point(-2.0f, 0.0f),  false, "On B dot");
	run_test(t2_a, t2_b, t2_c, Point(2.0f, 0.0f),   false, "On C dot");
	run_test(t2_a, t2_b, t2_c, Point(-1.0f, -2.0f), false, "On AB line");
	run_test(t2_a, t2_b, t2_c, Point(0.0f, 0.0f),   false, "On BC line");
	run_test(t2_a, t2_b, t2_c, Point(1.0f, 2.0f),   false, "On AC line");
    run_test(t2_a, t2_b, t2_c, Point(-1.0f, 0.1f),  true,  "Inside near BC line");
	run_test(t2_a, t2_b, t2_c, Point(-1.0f, -0.1f), false, "Outside near BC line");
	return (0);
}
