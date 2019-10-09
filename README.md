# Option-Pricing
How to run it: CallPrice/Debug/ open CallPrice.exe

Description:
Black Scholes model is one of the many well-known mathematical pricing models that are used to calculate theoretical call premium price and pull premium price for stock options markets. This model was developed by three professionals, Rebert Merton, Myron Scholes and in collaboration with the late Fischer Black. 

Black-Scholes takes five parameters into account, which are underlying price, strike (exercise) price, risk free interest rate, time until expiration (fraction of a year) and volatility, which is the standard deviation of the underlying instrument. This model assumes that no dividends are paid, no commissions, interest rates remain stable, returns on the underlying follow a lognormal distribution, and the option can only be exercised on the expiration date.

I built a windows form application that takes five inputs for each parameter for Black Scholes model. There are five text fields start with stock price, volatility, strike price, risk free rate, and current and expiration date to calculate the time to expiration. Then I converted these inputs from string to double variables in order to do the calculation later. For the Black Scholes formula, I broke it into three parts, one function is for the cumulative normal distribution function, one is for the call price formula and another one is for the pull price. Each Black Scholes function takes five parameters to calculate and uses the cumulative normal distribution function to carry out the final theoretical price. Finally a button was added to execute these event functions and print the results on the call and pull price text fields. 
