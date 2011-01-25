//
//  LWEUIAlertView.h
//  jFlash
//
//  Created by Mark Makdad on 8/9/10.
//  Copyright 2010 Long Weekend Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#define LWE_ALERT_CANCEL_BTN 0
#define LWE_ALERT_OK_BTN 1

/**
 * \brief   Helper functions for making standard types of UIAlertViews
 * \details Use the static methods in this class to create and then
 * immediately show/release different types of UIAlertViews.  Also,
 * you can use the LWE_ALERT_CANCEL_BTN and LWE_ALERT_OK_BTN constants
 * to avoid hard-coding integers into your delegate methods for UIAlertView
 */
@interface LWEUIAlertView : NSObject
{

}

/**
 * \brief Shows standard no-network alert view 
 */
+ (void) noNetworkAlert;

/**
 * \brief Shows standard no-network alert view with delegate
 */
+ (void) noNetworkAlertWithDelegate:(id)delegate;

/**
 * \brief Shows an "OK" alert notification
 */
+ (void) notificationAlertWithTitle:(NSString*)title message:(NSString*)message;

/**
 * \brief Shows an "OK" alert notification (with delegate)
 */
+ (void) notificationAlertWithTitle:(NSString*)title message:(NSString*)message delegate:(id)delegate;

/**
 * \brief Shows a Cancel/OK confirmation alert with standard OK/Cancel
 */
+ (void) confirmationAlertWithTitle:(NSString*)title message:(NSString*)message delegate:(id)delegate;

/**
 * \brief Shows a Cancel/OK confirmation alert with customized OK/Cancel
 */
+ (void) confirmationAlertWithTitle:(NSString*)title message:(NSString*)message ok:(NSString*)ok cancel:(NSString*)cancel delegate:(id)delegate;

@end