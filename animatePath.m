% Justin Chen
% CS599 Fall 2022
% FLS Holographic Flight Planning
% 
% This script plots position data of the drone holograms from the HL2 app
% in order to simulate a flight path.

% Must be in same directory as this script
fileName = 'positionData.csv';
table = readtable(fileName, 'ReadVariableNames', false, 'HeaderLines', 0);
cellMat = table2cell(table);


% Get the index of the rows with 'Path #'
rowIdxs = find(isnan(table.Var1));
rowIdxs(end + 1) = height(table);
xCoords = {};
yCoords = {};
zCoords = {};

% For number of paths
for i = 1:size(rowIdxs) - 1
    % Get all x coords
    xCoords{i} = rmmissing(table(rowIdxs(i):rowIdxs(i+1),1));
    % Get all y coords
    yCoords{i} = rmmissing(table(rowIdxs(i):rowIdxs(i+1),2));
    % Get all z coords
    zCoords{i} = rmmissing(table(rowIdxs(i):rowIdxs(i+1),3));
end

x1 = xCoords{1}.Var1;
y1 = yCoords{1}.Var2;
z1 = zCoords{1}.Var3;
x2 = xCoords{2}.Var1;
y2 = yCoords{2}.Var2;
z2 = zCoords{2}.Var3;

% Plotting
% Source: https://towardsdatascience.com/how-to-animate-plots-in-matlab-fa42cf994f3e
% Time array
t = linspace(0, 100, 1000);

% Setting up the Plot
figure; hold on
title("Trajectory", 'Interpreter', 'Latex');
xlabel('x', 'Interpreter', 'Latex')
ylabel('y', 'Interpreter', 'Latex')
zlabel('z', 'Interpreter', 'Latex')
grid minor  % Adding grid lines
axis equal  % Equal axis aspect ratio
view(-37.5,30);  % Setting viewing angle

% Create file name variable
filename = 'animation.gif';
% Plotting with no color to set axis limits
plot3(x1,y1,z1,'Color','none');
plot3(x2,y2,z2,'Color','none');

% Plotting the first iteration
p1 = plot3(x1(1),y1(1),z1(1),'b');
m1 = scatter3(x1(1),y1(1),z1(1),'filled','b');
p2 = plot3(x2(1),y2(1),z2(1),'b');
m2 = scatter3(x2(1),y2(1),z2(1),'filled','b');
% Iterating through the length of the time array
for k = 1:length(t)
    % Updating the line
    p1.XData = x1(1:k);
    p1.YData = y1(1:k);
    p1.ZData = z1(1:k);
    p2.XData = x2(1:k);
    p2.YData = y2(1:k);
    p2.ZData = z2(1:k);
    % Updating the point
    m1.XData = x1(k); 
    m1.YData = y1(k);
    m1.ZData = z1(k);
    m2.XData = x2(k); 
    m2.YData = y2(k);
    m2.ZData = z2(k);
    
    % Delay
    pause(0.3)
    % Saving the figure
    frame = getframe(gcf);
    im = frame2im(frame);
    [imind,cm] = rgb2ind(im,256);
    if k == 1
        imwrite(imind,cm,filename,'gif', 'Loopcount',inf,...
        'DelayTime',0.1);
    else
        imwrite(imind,cm,filename,'gif','WriteMode','append',...
        'DelayTime',0.1);
    end
end