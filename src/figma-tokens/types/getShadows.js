import {getTokens, camelCase, genShadow} from '../utils'

const getShadows = (layerName, stylesArtboard) => {
  const palette = {shadow: {}}
  const decorator = element => {
    console.log('### element: ', element.children[0].name);
    console.log('### element effect: ', element.children[0].effects[0]);
    const {name} = element.children[0]
    const {color, offset, radius} = element.children[0].effects[0]
    const tokens = {
      [camelCase(name)]: {value: genShadow(color, offset, radius)}
    }
    Object.assign(palette.shadow, tokens)
  }

  return getTokens(layerName, stylesArtboard, palette, decorator)
}

export default getShadows
