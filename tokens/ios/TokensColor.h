
//
// TokensColor.h
//
// Do not edit directly
// Generated on Thu, 17 Nov 2022 13:00:56 GMT
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
ColorPrimaryAccent,
ColorPrimaryMain,
ColorPrimaryLight
};

@interface TokensColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(TokensColorName)color;
@end
