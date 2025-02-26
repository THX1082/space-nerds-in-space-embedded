
module gunbarrel()
{
	cylinder(4.5,0.25,0.13,center=true,$fn=10);
	translate(v = [0, 0, 2.4]) 
		cylinder(1.0,0.20,0.20,center=true,$fn=10);
}

union() {
	sphere(2);
	translate([0,-0.75,0]) {
		translate([2,0,-1.25])
			rotate([0,90,0])
				gunbarrel();
		translate([2,0,1.25])
			rotate([0,90,0])
				gunbarrel();
	}
}
