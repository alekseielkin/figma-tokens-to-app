
//
// TokensColor.h
//
// Do not edit directly
// Generated on Thu, 03 Nov 2022 12:43:39 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, TokensColorName) {
ColorAlertWarning,
ColorAlertError,
ColorAlertSuccess,
ColorNeutral00,
ColorNeutral05,
ColorNeutral20,
ColorNeutral40,
ColorNeutral80,
ColorPrimaryDark,
ColorPrimaryMain,
ColorPrimaryLight
};

@interface TokensColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(TokensColorName)color;
@end
