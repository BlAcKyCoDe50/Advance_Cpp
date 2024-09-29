from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.common.keys import Keys
import time
from datetime import datetime, timedelta

# Set up the web driver (Chrome in this case)
driver = webdriver.Edge(executable_path="Z:\My_World\Creativity\edgedriver_win32\msedgedriver.exe")

try:
    # Step 1: Navigate to https://www.goindigo.in/
    driver.get("https://www.goindigo.in/")
    
    # Step 2: Verify the landing on the correct page and print the URL and Title of the Page
    print("Current URL:", driver.current_url)
    print("Page Title:", driver.title)

    # Step 3: Click on "Book" from the top dropdown
    WebDriverWait(driver, 10).until(
        EC.element_to_be_clickable((By.XPATH, '//a[@title="Book"]'))
    ).click()

    # Step 4: Click on "Flight" option (Already default in most cases, but let's ensure it)
    flight_option = driver.find_element(By.XPATH, '//a[@href="#bookFlightTab"]')
    flight_option.click()

    # Step 5: Click on the 1 pax option and increase the count of Adults to 2
    passenger_option = driver.find_element(By.ID, 'passenger')
    passenger_option.click()
    
    time.sleep(2)  # Adding a small wait to allow dropdown options to appear

    # Increase adult count to 2
    increase_adult_button = driver.find_element(By.XPATH, '//button[@aria-label="Adult plus"]')
    increase_adult_button.click()

    # Click on "Done" after setting passengers
    done_button = driver.find_element(By.XPATH, '//button[text()="Done"]')
    done_button.click()

    # Step 6: Enter Hyderabad in the "From" option and select from the dropdown
    from_input = driver.find_element(By.ID, 'or-src')
    from_input.clear()
    from_input.send_keys('Hyderabad')
    
    WebDriverWait(driver, 10).until(
        EC.element_to_be_clickable((By.XPATH, '//ul[@id="airportsData"]/li[contains(text(), "Hyderabad")]'))
    ).click()

    # Step 7: Enter Delhi in the "To" option and select from the dropdown
    to_input = driver.find_element(By.ID, 'or-dest')
    to_input.clear()
    to_input.send_keys('Delhi')
    
    WebDriverWait(driver, 10).until(
        EC.element_to_be_clickable((By.XPATH, '//ul[@id="airportsData"]/li[contains(text(), "Delhi")]'))
    ).click()

    # Step 8: Click on the Travel Dates and select a date 1 month from today's date
    travel_date_picker = driver.find_element(By.ID, 'or-depart')
    travel_date_picker.click()

    # Calculate the date 1 month from now
    today = datetime.today()
    one_month_later = today + timedelta(days=30)
    travel_day = one_month_later.strftime('%d')  # Extract the day in 'dd' format

    # Select the travel date (may need to adjust if month changes)
    WebDriverWait(driver, 10).until(
        EC.element_to_be_clickable((By.XPATH, f'//td[@data-date="{one_month_later.strftime("%Y-%m-%d")}"]'))
    ).click()

    # Step 9: Click on the "Search Flight" button
    search_button = driver.find_element(By.XPATH, '//button[@type="submit" and text()="Search Flight"]')
    search_button.click()

    # Step 10: Click on "Select" of the first recommendation and then click "Next"
    WebDriverWait(driver, 10).until(
        EC.element_to_be_clickable((By.XPATH, '(//button[text()="Select"])[1]'))
    ).click()

    next_button = driver.find_element(By.XPATH, '//button[@type="button" and text()="Next"]')
    next_button.click()

    # Step 11: Enter passenger details: click on Male and fill the first name, last name, and DOB
    # Select Male
    WebDriverWait(driver, 10).until(
        EC.element_to_be_clickable((By.XPATH, '//label[@for="Mr"]'))
    ).click()

    # Fill in first name
    first_name_input = driver.find_element(By.NAME, 'firstName[0]')
    first_name_input.send_keys("John")

    # Fill in last name
    last_name_input = driver.find_element(By.NAME, 'lastName[0]')
    last_name_input.send_keys("Doe")

    # Enter Date of Birth
    dob_day = driver.find_element(By.NAME, 'dobDay[0]')
    dob_day.send_keys("10")

    dob_month = driver.find_element(By.NAME, 'dobMonth[0]')
    dob_month.send_keys("Jan")

    dob_year = driver.find_element(By.NAME, 'dobYear[0]')
    dob_year.send_keys("1990")

finally:
    # Wait for a while before closing the browser, to observe the result
    time.sleep(10)
    driver.quit()
